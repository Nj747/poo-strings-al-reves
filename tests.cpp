// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch_amalgamated.hpp"
#include <iostream>

// INSERT YOUR TEST CASES HERE
// As well as your files

TEST_CASE( "Ex1", "[examples]" ) {
    REQUIRE( 1 == 1 );
}

TEST_CASE( "Ex2", "[examples]" ) {
    REQUIRE( 1 == 1 );
}
