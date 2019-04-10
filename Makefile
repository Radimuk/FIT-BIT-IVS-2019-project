all: clean build test

antlr4-compile:
	cd src && antlr4 -Dlanguage=Cpp -no-listener -visitor calculator.g4 -o grammar

build:
	cmake -Bbuild -H.
	cmake --build build

clean:
	rm -rf build

deb-package:
	gbp dch -a -S --ignore-branch
	dpkg-buildpackage -b -rfakeroot -us -uc -tc

run: build
	./build/bin/fit-calc

test: build
	./build/bin/tests
