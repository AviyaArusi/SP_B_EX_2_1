#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

using namespace std;
namespace ariel
{

    class Fraction 
    {
    private:
        int numerator;
        int denominator;

    public:
        // Constructors
        Fraction();
        Fraction(int, int);

        // Overloaded operators for arithmetic operations
        Fraction operator+(const Fraction&) const;
        Fraction operator-(const Fraction&) const;
        Fraction operator*(const Fraction&) const;
        Fraction operator/(const Fraction&) const;

        // Overloaded comparison operators
        bool operator==(const Fraction&) const;
        bool operator!=(const Fraction&) const;
        bool operator>(const Fraction&) const;
        bool operator>(const double&) const;
        bool operator<(const Fraction&) const;
        bool operator>=(const Fraction&) const;
        bool operator<=(const Fraction&) const;

        // Overloaded ++ and -- operators
        Fraction& operator++();
        Fraction operator++(int);
        Fraction& operator--();
        Fraction operator--(int);

        // Overloaded << and >> operators
        friend std::ostream& operator<<(std::ostream&, const Fraction& );
        friend std::istream& operator>>(std::istream&, Fraction& );

        friend Fraction operator+(const Fraction&, double);
        friend Fraction operator+(double, const Fraction&);
 
        friend Fraction operator-(const Fraction&, double);
        friend Fraction operator-(double, const Fraction&);
        
        friend Fraction operator*(const Fraction&, double);
        friend Fraction operator*(double, const Fraction&);
        
        friend Fraction operator/(const Fraction&, double);
        friend Fraction operator/(double, const Fraction&);

    };
}

#endif // FRACTION_HPP
