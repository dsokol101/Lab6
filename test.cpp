#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "SimpleString.h"

TEST_CASE("SimpleString constructor stores string correctly") {
    SimpleString s("Hello");
    CHECK(std::string(s.c_str()) == "Hello");
}

TEST_CASE("SimpleString copy constructor copies correctly") {
    SimpleString original("World");
    SimpleString copy = original;
    CHECK(std::string(copy.c_str()) == "World");
}

TEST_CASE("SimpleString assignment operator assigns correctly") {
    SimpleString first("First");
    SimpleString second("Second");

    second = first;
    CHECK(std::string(second.c_str()) == "First");
}

TEST_CASE("SimpleString self-assignment does not corrupt data") {
    SimpleString str("Self");
    str = str;
    CHECK(std::string(str.c_str()) == "Self");
}
