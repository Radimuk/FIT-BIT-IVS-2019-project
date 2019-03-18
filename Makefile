all: compile test

compile: clean
	mkdir build
	cmake -Bbuild -H.
	cmake --build build

clean:
	rm -rf build

run: compile
	./build/bin/fit-calc

test: compile
	./build/bin/tests
