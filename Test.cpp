#include "doctest.h"
#include "solver.hpp"
#include <string>
using namespace std;
using namespace solver;


TEST_CASE("Test RealVariable"){
    RealVariable x;

    CHECK(solve((x^2) == 9) == 3);
    CHECK(solve((x^2) == 81) == 9);
    CHECK(solve((x^2) == 121) == 11);
    CHECK(solve((x^2) == 196) == 14);
    CHECK(solve((x^2) == 44)  == 12);
    CHECK(solve((x^2) == 6241) == 79);
    CHECK(solve((x^2) == 2401) == 49);
    CHECK(solve((x^2) ==  4356) == 66);
    CHECK(solve((x^2) == 10000) == 100);
    CHECK(solve((x^2) == 9801) == 99);
    CHECK(solve((x^2) == 3136) == 56);
    CHECK(solve((x^2) == 0) == 0);
    CHECK(solve((x^2) == 1681) == 41);
    CHECK(solve((x^2) == 1000000) == 1000);
    CHECK(solve((x^2) == 25921) == 161);
    CHECK(solve((x^2) == 8281) == 91);
    CHECK(solve((x^2) == 2704) == 52);
    CHECK(solve(9*x == 18) == 2);
    CHECK(solve(7*x+11-x == 10+7) == 1);
    CHECK(solve(49*x == 343) == 7);
    CHECK(solve(x-15 == 8) ==- 23);
    CHECK(solve(-3*(-1*x-7) == 8*x) == 4.5);
    CHECK(solve(3*x/0.5*x) == 6);
    CHECK(solve(6*x/0.5*x) == 12);
    CHECK((solve(x+x - x - 4 == 10) == 14));
    CHECK((solve(x + 4 == 10) == 6));
    CHECK(solve((x^2)  == 81) == 9);
    CHECK(solve((x^2)  == 25) == 5);
    CHECK(solve((x^2) == 36) == 6);
    CHECK(solve((x^2)  == 196) == 14);
    CHECK((solve((x^2)-20*x+100 == 0) == 10));
    CHECK((solve((x^2)-16*x+64 == 0) == 8));
    CHECK(solve((x^2) == 81) == 9);
    CHECK(solve((x^2) == 25) == 5);
    CHECK(solve((x^2) == 36) == 6);
    CHECK(solve((x^2) == 196) == 14);
    CHECK(solve(2*x-2 == 10) == 8);
    CHECK(solve(15*x-5*x == 10) == 1);
    CHECK(solve(2*x-3*x == 10) == -10);
    CHECK(solve(1000*x-2900 == 100) == 3);
    CHECK_THROWS(solve(0*x == 9100));
    CHECK_THROWS(solve(0*x == 1699816));
    CHECK_THROWS(solve(0*x == 17778915));
    CHECK_THROWS(solve(1*x-1*x == 1));
    CHECK_THROWS(solve(376*x-376*x == 2346789));
    CHECK_THROWS(solve(36*x-36*x == 686868));
    CHECK_THROWS(solve(376*x-376*x == 2346789));
    CHECK_THROWS(solve(36*x-36*x == 686868));
    CHECK_THROWS(solve(8883*x-8883*x == 9));
    CHECK_THROWS((solve(x/0 == 3)));

    CHECK((solve((x^2) -5*x + 6 == 0) == 3 || solve((x^2) -5*x + 6 == 0) == 2));
    CHECK((solve((x^2) -4*x + 3 == 0) == 3 || solve((x^2) -4*x + 3 == 0) == 1));
    CHECK((solve((x^2) -7*x + 6 == 0) == 6 || solve((x^2) -7*x + 6 == 0) == 1));
    CHECK((solve((x^2) -8*x + 7 == 0) == 7 || solve((x^2) -8*x + 7 == 0) == 1));
    CHECK((solve((x^2) -9*x + 8 == 0) == 8 || solve((x^2) -9*x + 8 == 0) == 1));
    CHECK((solve((x^2) == 4) == 2 || solve((x^2) == 4) == -2));
    CHECK((solve((x^2) == 9) == 3 || solve((x^2) == 9) == -3));
    CHECK((solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4));
    CHECK((solve((x^2) == 25) == 5 || solve((x^2) == 25) == -5));
    CHECK((solve((x^2) == 36) == 6 || solve((x^2) == 36) == -6));
    CHECK((solve((x^2) == 49) == 7 || solve((x^2) == 49) == -7));
    CHECK((solve((x^2) == 64) == 8 || solve((x^2) == 64) == -8));
    

    
}


TEST_CASE("Test ComplexVariable"){
    ComplexVariable y;
    ComplexVariable x;

    CHECK(( solve((y^2) == -4)==complex<double> (0,2) || solve((y^2) == -4) == complex<double> (0,-2)));
    CHECK((solve((y^2) + 100 == 0) == complex<double> (0,10) || solve((y^2) + 100 == 0) == complex<double> (0,-10)));
    CHECK((solve((y^2) + 4*y + 5 == 0) == complex<double> (-2,1) || solve((y^2) + 4*y + 5 == 0) == complex<double> (-2,-1)));
    CHECK((solve((2*y^2) -6*y + 5 == 0) == complex<double> (1.5,0.5) || solve((2*y^2) -6*y + 5 == 0) == complex<double> (1.5,-0.5)));
    CHECK((solve((x^2) == -9) == complex<double>(0,3) || solve((x^2) == -9) == complex<double>(0,-3)));
    CHECK((solve((x^2) == -1) == complex<double>(0,1) || solve((x^2) == -1) == complex<double>(0-1)));
    CHECK((solve((x^2) == -36) == complex<double>(0,6) || solve((x^2) == -36) == complex<double>(0, -6)));
    CHECK((solve((x^2) == -100) == complex<double>(0,10) || solve((x^2) == -100) == complex<double>(0,-10)));
    CHECK((solve((x^2) == -49) == complex<double>(0,7) || solve((x^2) == -49) == complex<double>(0,-7)));
    CHECK((solve((x^2) == -16) == complex<double>(0,4) || solve((x^2) == -16) == complex<double>(0,-4)));
    CHECK((solve((x^2) == -25) == complex<double>(0,5) || solve((x^2) == -25) == complex<double>(0,-5)));
    CHECK((solve((x^2) == -64) == complex<double>(0,8) || solve((x^2) == -64) == complex<double>(0,-8)));
    CHECK((solve((x^2) == -81) == complex<double>(0,9) || solve((x^2) == -81) == complex<double>(0,-9)));

    CHECK((solve((x^2) + 20*x + 100 == 0) == double(-10)));
    CHECK((solve((x^2) + 18*x + 81 == 0) == double(-9)));
    CHECK((solve((x^2) + 16*x + 64 == 0) == double(-8)));
    CHECK((solve((x^2) - 4*x + 4 == 0) == double(2)));
    CHECK((solve((x^2) - 6*x + 9 == 0) == double(3)));
    CHECK((solve((x^2) + 10*x + 25 == 0) == double(-5)));
    CHECK((solve((x^2) + 6*x + 9 == 0) == double(-3)));
    CHECK((solve((x^2) + 10*x + 25 == 0) == double(-5)));
    CHECK((solve((x^2) + 12*x + 36 == 0) == double(-6)));
    CHECK((solve((x^2) + 14*x + 49 == 0) == double(-7)));
    CHECK((solve((x^2) + 16*x + 64 == 0) == double(-8)));
    CHECK((solve((x^2) - 6*x + 9 == 0) == double(3)));
    CHECK((solve((x^2) - 8*x + 16 == 0) == double(4)));
    CHECK((solve((x^2) - 10*x + 25 == 0) == double(5)));
    CHECK((solve((x^2) - 12*x + 36 == 0) == double(6)));
    CHECK((solve((x^2) - 14*x + 49 == 0) == double(7)));
    CHECK((solve((x^2) - 16*x + 64 == 0) == double(8)));
    CHECK((solve(x-4 == 10) == double(14)));
    CHECK((solve(2*x-4 == 10) == double(7)));
    CHECK((solve(x+x-4 == 10) == double(7)));
    CHECK((solve(x+x-x-4 == 10) == double(14)));
    CHECK((solve(-1*x == 10) == double(-10)));
    CHECK((solve((x^2) == 4) == double(2) || solve((x^2) == 4) == double(-2)));
    CHECK((solve((x^2) == 16) == double(4) || solve((x^2) == 16) == double(-4)));
    CHECK((solve((x^2) == 100) == double(10) || solve((x^2) == 100) == double(-10)));
    CHECK((solve((x^2) == 25) == double(5) || solve((x^2) == 25) == double(-5)));
    CHECK((solve((x^2) == 81) == double(9) || solve((x^2) == 81) == double(-9)));
    CHECK((solve((x^2) + 12*x + 36 == 0) == double(-6)));
    CHECK((solve((x^2) + 14*x + 49 == 0) == double(-7)));
    CHECK((solve((x^2) + 16*x + 64 == 0) == double(-8)));
    CHECK((solve((x^2) - 6*x + 9 == 0) == double(3)));
    CHECK((solve((x^2) - 8*x + 16 == 0) == double(4)));
    CHECK((solve((x^2) - 10*x + 25 == 0) == double(5)));
    CHECK((solve((x^2) - 12*x + 36 == 0) == double(6)));
    CHECK((solve((x^2) - 14*x + 49 == 0) == double(7)));
    CHECK((solve((x^2) - 16*x + 64 == 0) == double(8)));
    CHECK((solve(x-4 == 10) == double(14)));
    CHECK((solve(2*x-4 == 10) == double(7)));
    CHECK((solve(x+x-4 == 10) == double(7)));
    CHECK((solve(x+x-x-4 == 10) == double(14)));
    CHECK((solve(-1*x == 10) == double(-10)));
    CHECK((solve((x^2) == 4) == double(2) || solve((x^2) == 4) == double(-2)));
    CHECK((solve((x^2) == 16) == double(4) || solve((x^2) == 16) == double(-4)));
    CHECK((solve((x^2) == 100) == double(10) || solve((x^2) == 100) == double(-10)));
    CHECK((solve((x^2) == 25) == double(5) || solve((x^2) == 25) == double(-5)));
    CHECK((solve((x^2) == 81) == double(9) || solve((x^2) == 81) == double(-9)));

    CHECK_THROWS((solve(x/0 == 3)));
}