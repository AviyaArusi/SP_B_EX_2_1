#include "Fraction.hpp"

namespace ariel
{
    // Constructors
    Fraction::Fraction() : numerator(0), denominator(1) {}
    Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {}
    Fraction::Fraction(float new_float) : numerator(0), denominator(1) {}

    // Get & Set
    int Fraction::get_numerator() const { return numerator; }
    int Fraction::get_denominator() const { return denominator; }
    void Fraction::set_numerator(int num) { numerator = num; }
    void Fraction::set_denominator(int den) { denominator = den;}

    // Overloaded operators for arithmetic operations
    Fraction Fraction::operator+(const Fraction& other) const { return Fraction(0, 1); }
    Fraction Fraction::operator-(const Fraction& other) const { return Fraction(0, 1); }
    Fraction Fraction::operator*(const Fraction& other) const { return Fraction(0, 1); }
    Fraction Fraction::operator/(const Fraction& other) const { return Fraction(0, 1); }

    // Overloaded comparison operators
    bool Fraction::operator==(const Fraction& other) const { return 1; }
    bool Fraction::operator!=(const Fraction& other) const { return 1; }
    bool Fraction::operator>(const Fraction& other) const { return 1; }
    bool Fraction::operator<(const Fraction& other) const { return 1; }
    bool Fraction::operator>=(const Fraction& other) const { return 1; }
    bool Fraction::operator<=(const Fraction& other) const { return 1; }

    // Overloaded ++ and -- operators
    Fraction& Fraction::operator++() { return *this; }
    const Fraction Fraction::operator++(int) { return *this; }
    Fraction& Fraction::operator--() { return *this; }
    const Fraction Fraction::operator--(int) { return *this; }

    // Overloaded << and >> operators
    ostream& operator<<(ostream& os, const Fraction& fraction) { return os; }
    istream& operator>>(istream& is, Fraction& fraction) { return is; }

    // Friend functions
    Fraction operator+(const float& value, const Fraction& fraction) { return Fraction(0, 1); }
    Fraction operator+(const Fraction& fraction, const float& value) { return Fraction(0, 1); }

    Fraction operator-(const float& value, const Fraction& fraction) { return Fraction(0, 1); }
    Fraction operator-(const Fraction& fraction, const float& value) { return Fraction(0, 1); }

    Fraction operator*(const float& value, const Fraction& fraction) { return Fraction(0, 1); }
    Fraction operator*(const Fraction& fraction, const float& value) { return Fraction(0, 1); }

    Fraction operator/(const float& value, const Fraction& fraction) { return Fraction(0, 1); }
    Fraction operator/(const Fraction& fraction, const float& value) { return Fraction(0, 1); }

    bool operator==(const float&, const Fraction&) { return 1; }
    bool operator==(const Fraction&, const float&) { return 1; }

    bool operator!=(const float&, const Fraction&) { return 1; }
    bool operator!=(const Fraction&, const float&) { return 1; }

    bool operator>(const float&, const Fraction&) { return 1; }
    bool operator>(const Fraction&, const float&) { return 1; }

    bool operator<(const float&, const Fraction&) { return 1; }
    bool operator<(const Fraction&, const float&) { return 1; }

    bool operator>=(const float&, const Fraction&) { return 1; }
    bool operator>=(const Fraction&, const float&) { return 1; }

    bool operator<=(const float&, const Fraction&) { return 1; }
    bool operator<=(const Fraction&, const float&) { return 1; }

    // Helper function to reduce the fraction to its lowest terms
    Fraction Fraction::reduce() { return *this;}


}