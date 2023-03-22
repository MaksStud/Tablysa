#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "Tab.h"
#include "doctest.h"

using namespace std;

TEST_CASE("Test#1 tabel") {
	Table a;
	a.add("1", -7);
	CHECK(a.get("1") == -7);
}

TEST_CASE("Test#2 tabel") {
	Table a;
	a.add("2", 100);
	CHECK(a.get("2") == 100);
}

TEST_CASE("Test#3 tabel") {
	Table a;
	a.add("3", 0);
	CHECK(a.get("3") == 0);
}