#define CATCH_CONFIG_MAIN  

#include "catch_amalgamated.hpp"
#include "reverse_string.hpp"
#include <iostream>

TEST_CASE("Ex1", "[a_word]")
{
    REQUIRE("tobor" == reverse_string::reverse_string("robot"));
}

TEST_CASE("Ex2","[a_capitalized_word]")
{
    REQUIRE("nemaR" == reverse_string::reverse_string("Ramen"));
}

TEST_CASE("Ex3", "[a_sentence_with_punctuation]")
{
    REQUIRE("!yrgnuh m'I" == reverse_string::reverse_string("I'm hungry!"));
}

TEST_CASE("Ex4", "[a_palindrome]")
{
   REQUIRE("racecar" == reverse_string::reverse_string("racecar"));
}
