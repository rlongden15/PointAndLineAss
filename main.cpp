#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "point.hpp"
using namespace std;

//--
// TEST_CASE("Point and Line Assignment")  
// { 
// 	SECTION("Test Point Functionality") {
// 		point p1(3.5, 4.2);
// 		//check getter with valid input
// 		REQUIRE(p1.GetX() == 3.5);
// 		//check getter with valid input
// 		REQUIRE(p1.GetY() == 4.2);
// 		//check getter with negtive invalid input
// 		point p2(-1.0, -5.0);
// 		REQUIRE(p2.GetX() == 0.0);
// 		REQUIRE(p2.GetY() == 0.0);
// 	}
// }