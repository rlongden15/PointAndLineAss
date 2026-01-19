#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
#include "point.hpp"
#include "line.hpp"
using namespace std;


 TEST_CASE("Point and Line Assignment")  
 { 
 	SECTION("Test Point Functionality") {
 		point p1(3.5, 4.2);
 		//check getter with valid input
 		REQUIRE(p1.GetX() == 3.5);
 		REQUIRE(p1.GetY() == 4.2);
       //check getter with negtive invalid input
 		point p2(-1.0, -5.0);
 		REQUIRE(p2.GetX() == 0.0);
 		REQUIRE(p2.GetY() == 0.0);
        //check rounding with point class
        point p3(1076.761137843823, 3323.72124322);
        REQUIRE(p3.GetX() == 1076.8);
        REQUIRE(p3.GetY() == 3323.7);
 	}

	SECTION("Line test"){
		//testing length
		line l1(4.5, 6.2, 1.2, 3.9);
		REQUIRE(l1.length() == 4.0);
		line l2(2.3, 4.7, 4000.2, 3000.675);
		REQUIRE(l2.length() == 4995.9);

		//testing slope
		REQUIRE(l1.slope() == 0.7);
		REQUIRE(l2.slope() == 0.7);

		
	}


 }



