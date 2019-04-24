DESTDIR := $(if $(DESTDIR),$(DESTDIR),/usr/local)
ZIPDIR := xlipka02_xondra58_xraurp00_xreinh00

.PHONY: all

all: build-debug

antlr4-compile:
	cd src && antlr4 -Dlanguage=Cpp -no-listener -visitor calculator.g4 -o grammar

build-release:
	cmake -DCMAKE_BUILD_TYPE=Release -j4 -Bbuild/release -H.
	cmake --build build/release

build-debug:
	cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_PROFILING=Yes -j4 -Bbuild/debug -H.
	cmake --build build/debug

clean:
	rm -rf build
	$(MAKE) -C docs/user clean
	$(MAKE) -C profiling clean

cleanall: clean
	rm -rf docs/api

deb-changelog-snapshot:
	gbp dch -a -S --ignore-branch

deb-changelog-release:
	gbp dch -a -R

deb-package:
	dpkg-buildpackage -b -rfakeroot -us -uc -tc

doc: doxygen user-doc

doxygen:
	@mkdir -p docs/api
	@doxygen

pack: doc deb-package clean
	rm -rf ../$(ZIPDIR)/ ../$(ZIPDIR).zip ../pack/
	mkdir -p ../$(ZIPDIR)/install ../pack/wis ../pack/full
	cp -r docs/api/html ../$(ZIPDIR)/doc
	cp ../fit-calc*.deb ../$(ZIPDIR)/install
	rm -rf cmake-build-debug/ docs/api/ .idea/
	cp -r . ../$(ZIPDIR)/repo
	cd .. && zip -r $(ZIPDIR).zip $(ZIPDIR)/
	mv ../$(ZIPDIR).zip ../pack/full/
	cd ../$(ZIPDIR) && rm -rf doc/ install/ repo/.git repo/external/* repo/profiling/img/ repo/profiling/Makefile  repo/profiling/zprava.tex
	cd ../$(ZIPDIR) && mkdir repo/external/antlr4 repo/external/googletest
	cd .. && zip -r $(ZIPDIR).zip $(ZIPDIR)/
	mv ../$(ZIPDIR).zip ../pack/wis/

profile: build-debug

profile-doc:
	$(MAKE) -C profiling

profile-run: profile
	valgrind --tool=callgrind --callgrind-out-file=profiling/callgrind10.out ./build/debug/bin/stddev < src/profiling/data10.csv
	valgrind --tool=callgrind --callgrind-out-file=profiling/callgrind100.out ./build/debug/bin/stddev < src/profiling/data100.csv
	valgrind --tool=callgrind --callgrind-out-file=profiling/callgrind1000.out ./build/debug/bin/stddev < src/profiling/data1000.csv

profile-view: profile-run
	kcachegrind profiling/callgrind10.out
	kcachegrind profiling/callgrind100.out
	kcachegrind profiling/callgrind1000.out

install:
	cmake -DGLADE_FILE="/usr/local/share/fit-calc/calculator_gui.glade" -DCMAKE_BUILD_TYPE=Release -DENABLE_TESTING=No -j4 -Bbuild/install -H.
	cmake --build build/install
	$(MAKE) -C build/install install

run: build-debug
	./build/debug/bin/fit-calc

test: build-debug
	./build/debug/bin/tests

uninstall:
	$(MAKE) -C build/install uninstall

user-doc:
	$(MAKE) -C docs/user
	cp -u docs/user/dokumentace.pdf dokumentace.pdf
