DESTDIR := $(if $(DESTDIR),$(DESTDIR),/usr/local)

all: build-release

antlr4-compile:
	cd src && antlr4 -Dlanguage=Cpp -no-listener -visitor calculator.g4 -o grammar

build-release:
	cmake -DCMAKE_BUILD_TYPE=Release -j4 -Bbuild/release -H.
	cmake --build build/release

build-debug:
	cmake -DCMAKE_BUILD_TYPE=Debug -j4 -Bbuild/debug -H.
	cmake --build build/debug

clean:
	rm -rf build
	rm -rf docs

deb-package:
	gbp dch -a -S --ignore-branch
	dpkg-buildpackage -b -rfakeroot -us -uc

doc: doxygen

doxygen:
	@mkdir -p docs/api
	@doxygen

install:
	cmake -DGLADE_FILE="/usr/local/share/fit-calc/calculator_gui.glade" -DCMAKE_BUILD_TYPE=Release -j4 -Bbuild/install -H.
	cmake --build build/install
	$(MAKE) -C build/install install

run: build-release
	./build/release/bin/fit-calc

run-debug: build-debug
	./build/debug/bin/fit-calc

test: build-release
	./build/release/bin/tests

test-debug: build-debug
	./build/debug/bin/tests

uninstall:
	$(MAKE) -C build/install uninstall

