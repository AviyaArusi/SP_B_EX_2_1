#include "Fraction.hpp"

namespace ariel
{
    // Constructors
    Fraction::Fraction() : numerator(0), denominator(1) {}

    Fraction::Fraction(int num, int den) : numerator(num), denominator(den) 
    {
        if(den == 0)
        {
            throw invalid_argument("denominator can't be 0 !");
        }
    }

    // Overloaded operators for arithmetic operations
    Fraction Fraction::operator+(const Fraction& other) const 
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator-(const Fraction& other) const
     {
        return Fraction(1, 1);
     }

    Fraction Fraction::operator*(const Fraction& other) const
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator/(const Fraction& other) const 
    {
        return Fraction(1, 1);
    }

    // Overloaded comparison operators
    bool Fraction::operator==(const Fraction& other) const 
    {
        return 1;
    }

    bool Fraction::operator!=(const Fraction& other) const 
    {
        return 1;
    }

    bool Fraction::operator>(const Fraction& other) const 
    {
        return 1;
    }

    bool Fraction::operator>(const double& other) const
    {
         return 1;
    }

    bool Fraction::operator<(const Fraction& other) const 
    {
        return 1;
    }

    bool Fraction::operator>=(const Fraction& other) const 
    {
        return 1;
    }

    bool Fraction::operator<=(const Fraction& other) const 
    {
        return 1;
    }

    // Overloaded ++ and -- operators
    Fraction& Fraction::operator++() 
    {
        numerator += denominator;
        return *this;
    }

    Fraction Fraction::operator++(int) 
    {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }

    Fraction& Fraction::operator--() 
    {
        numerator -= denominator;
        return *this;
    }

    Fraction Fraction::operator--(int) 
    {
        Fraction temp = *this;
        numerator -= denominator;
        return temp;
    }

    // Overloaded << and >> operators
    ostream& operator<<(ostream& os, const Fraction& fraction) 
    {
        return os;
    }

    istream& operator>>(istream& is, Fraction& fraction) 
    {
        return is;
    }

    Fraction operator+(const Fraction& fraction, double value) 
    {
        return Fraction(1, 1);
    }
   
    Fraction operator+(double value, const Fraction& fraction)
    {
        return Fraction(1, 1);
    }

    Fraction operator-(const Fraction& fraction, double value) 
    {
        return Fraction(1, 1);
    }

    Fraction operator-(double value, const Fraction& fraction)
    {
        return Fraction(1, 1);
    }

    Fraction operator*(const Fraction& fraction, double value) 
    {
        return Fraction(1, 1);
    }

    Fraction operator*(double value, const Fraction& fraction)
    {
        return Fraction(1, 1);
    }

    Fraction operator/(const Fraction& fraction, double value) 
    {
        return Fraction(1, 1);
    }

    Fraction operator/(double value, const Fraction& fraction)
    {
        return Fraction(1, 1);
    }

}