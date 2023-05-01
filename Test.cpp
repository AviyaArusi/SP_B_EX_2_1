#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
//**
#include <cassert>
#include "doctest.h"
// #include 
//**

#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;



TEST_CASE("Constructor test:")
{
    Fraction a;
    Fraction b(0,1);
    CHECK( a == b);
//    CHECK( a == Fraction(a));
    CHECK_THROWS(Fraction(1,0));
}

TEST_CASE("Operator use:")
{
    Fraction a(1,4), b(1,4), c(1,2), d(0,1), e(1,16), f(1,1);
    CHECK( (a+b) == c );
    CHECK( (a-b) == d );
    CHECK( (a*b) == e );
    CHECK( (a/b) == f );
}

TEST_CASE("Boolean operator use:")
{
    Fraction a(1,4), b(1,4), c(1,2);
    CHECK(a == b);
    CHECK(a != c);
    CHECK(c > a);
    CHECK(a < c);
    CHECK(c >= c);
    CHECK(c >= a);
    CHECK(a <= a);
    CHECK(a <= c);
}

TEST_CASE("Short operator use:")
{
    Fraction a(1,4), b(1,4), c(5,4);
    CHECK(a++ == b);
    CHECK(a-- == c);
    CHECK(a == b);
    CHECK(++a == c);
    CHECK(b == --c);
}

TEST_CASE("Friend operator use:")
{
    Fraction a(1,1), b(2,1), c(0,1);
    CHECK(a+1.1 == b);
    CHECK(1.1+a == b);
    CHECK(a-1.1 == c);
    CHECK(a*b == b);
//    CHECK(a*3.6 = );
}


