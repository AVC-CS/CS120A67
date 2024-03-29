// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "main.hpp"

// tests for exercise 1
TEST_CASE("Test1 ", "[Swap two values]")
{
	int n1, n2, n3, n4;
	int max, min;
	n1 = 10;
	n2 = 20;
	n3 = 30;
	swap(n1, n2);
	REQUIRE(n1 == 20);
	REQUIRE(n2 == 10);
	n1 = 20;
	n2 = 30;
	n3 = 10;
	swap(n1, n2, n3);
	REQUIRE(n1 == 10);
	REQUIRE(n2 == 20);
	REQUIRE(n3 == 30);
	n1 = 10;
	n2 = 20;
	n3 = 30;
	n4 = 40;
	swap(n1, n2, n3, n4);
	REQUIRE(n1 == 20);
	REQUIRE(n2 == 30);
	REQUIRE(n3 == 40);
	REQUIRE(n4 == 10);
}