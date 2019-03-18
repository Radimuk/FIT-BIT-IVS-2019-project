all: clean build test

build:
	cmake -Bbuild -H.
	cmake --build build

clean:
	rm -rf build

run: build
	./build/bin/fit-calc

test: build
	./build/bin/tests
