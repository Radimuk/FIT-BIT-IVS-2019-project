all: compile

compile:
	rm -rf build
	mkdir build
	cmake -Bbuild .
	cmake --build build

clean:
	rm -rf build

run: build/bin/fit-calc
	./build/bin/fit-calc

test: build/bin/tests
	./build/bin/tests