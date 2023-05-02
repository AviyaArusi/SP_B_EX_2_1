#include <iostream>
#include <sstream>
#include <cassert>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;



TEST_CASE("Constructor test:")
{
    Fraction a; // Empty constructor.
    Fraction b(0,1); // Int Constructor.
    Fraction c(0.5); // Float Constructor.
    CHECK( a == b);
    CHECK( a == Fraction(a));
    CHECK(c == Fraction(2, 4)); // the reduce().
    CHECK_THROWS(Fraction(1,0));// zero in the denominator.
    CHECK_THROWS(Fraction(0.0)); // Zero in the denominator.
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

    CHECK(a++ == b);// Still a = 1/4 .
    CHECK(a == c);// After the ++ a = 5/4 .
    CHECK(a-- == c);// Still a = 5/4 .
    CHECK(a == b); // After a = 1/4 .
    CHECK(++a == c); // Change a before == to 5/4 .
    CHECK(b == --c); // Change c before == to 1/4 .
}

TEST_CASE("Input&Output use:")
{
    Fraction f1(1, 2), f2(1/4);

    stringstream ss1;
    CHECK_NOTHROW( ss1 << f1 );
    CHECK(ss1.str() == "1/2");

    stringstream ss2("1/4");
    CHECK_NOTHROW( ss2 >> f1 );
    CHECK(f1 == f2);
}

TEST_CASE("Friend operator use:")
{
    Fraction a(1,1), b(2,1), c(0,1);

    CHECK( (1.0+a) == b);
    CHECK( (1.1-a) == c);
    CHECK( (2.0*a) == b);
    CHECK( (2.0/b) == a);

    CHECK( (a+0.25) == 1.25 );
    CHECK( (a-0.25) == 0.75 );
    CHECK( (a*0.25) == 0.25 );
    CHECK( (a/0.25) == 4.0 );

    CHECK(a != 0.5);
    CHECK(0.5 != a);

    CHECK(a == 0.25);
    CHECK(0.25 == a);

    CHECK(c > 0.25);
    CHECK(0.5 > a);

    CHECK(a < 0.5);
    CHECK(0.25 < c);

    CHECK(c >= 0.25);
    CHECK(0.5 >= a);

    CHECK(a <= 0.5);
    CHECK(0.25 <= c);
}



