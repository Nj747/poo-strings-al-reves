all: clean test

appTests: tests.cpp
	g++ -Wall --std=c++17 tests.cpp catch_amalgamated.cpp -o appTests

test: appTests
	# executes all tests
	./appTests

appTests: tests.cpp 

clean:
	rm -f appTests
