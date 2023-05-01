// #include "Fraction.hpp"
// #include <iostream>
// #include <cmath>

// namespace ariel
// {
//     // Constructors
//     Fraction::Fraction() {
//         numerator = 0;
//         denominator = 1;
//     }

//     Fraction::Fraction(int numerator, int denominator) {
//         this->numerator = numerator;
//         this->denominator = denominator;
//         reduce();
//     }

//     Fraction::Fraction(float value) {
//         // Convert float to fraction with up to 3 digits beyond the decimal point for accuracy
//         int tempNumerator = round(value * 1000);
//         int tempDenominator = 1000;
//         int gcd = std::__gcd(tempNumerator, tempDenominator);
//         numerator = tempNumerator / gcd;
//         denominator = tempDenominator / gcd;
//     }

//     // Overloaded Operators

//     Fraction Fraction::operator+(const Fraction& other) const {
//         int num = numerator * other.denominator + other.numerator * denominator;
//         int den = denominator * other.denominator;
//         return Fraction(num, den);
//     }

//     Fraction Fraction::operator-(const Fraction& other) const {
//         int num = numerator * other.denominator - other.numerator * denominator;
//         int den = denominator * other.denominator;
//         return Fraction(num, den);
//     }

//     Fraction Fraction::operator*(const Fraction& other) const {
//         int num = numerator * other.numerator;
//         int den = denominator * other.denominator;
//         return Fraction(num, den);
//     }

//     Fraction Fraction::operator/(const Fraction& other) const {
//         int num = numerator * other.denominator;
//         int den = denominator * other.numerator;
//         return Fraction(num, den);
//     }

//     Fraction Fraction::operator+(const float& value) const {
//         return *this + Fraction(value);
//     }

//     Fraction Fraction::operator-(const float& value) const {
//         return *this - Fraction(value);
//     }

//     bool Fraction::operator==(const Fraction& other) const {
//         return numerator == other.numerator && denominator == other.denominator;
//     }

//     bool Fraction::operator>(const Fraction& other) const {
//         return static_cast<float>(numerator) / denominator > static_cast<float>(other.numerator) / other.denominator;
//     }

//     bool Fraction::operator<(const Fraction& other) const {
//         return static_cast<float>(numerator) / denominator < static_cast<float>(other.numerator) / other.denominator;
//     }

//     bool Fraction::operator>=(const Fraction& other) const {
//         return static_cast<float>(numerator) / denominator >= static_cast<float>(other.numerator) / other.denominator;
//     }

//     bool Fraction::operator<=(const Fraction& other) const {
//         return static_cast<float>(numerator) / denominator <= static_cast<float>(other.numerator) / other.denominator;
//     }

//     Fraction& Fraction::operator++() {
//         numerator += denominator;
//         reduce();
//         return *this;
//     }

//     Fraction Fraction::operator++(int) {
//         Fraction temp = *this;
//         ++(*this);
//         return temp;
//     }

//     Fraction& Fraction::operator--() {
//         numerator -= denominator;
//         reduce();
//         return *this;
//     }

//     Fraction Fraction::operator--(int) {
//         Fraction temp = *this;
//         --(*this);
//         return temp;
//     }

//     // Friend functions for non-member operators

//     Fraction operator*(const float& value, const Fraction& fraction) {
//         return Fraction(value) * fraction;
//     }

//     bool operator>(const float& value, const Fraction& fraction) {
//         return value > static_cast<float>(fraction.numerator) / fraction.denominator;
//     }

//     bool operator<(const float& value, const Fraction& fraction) {
//         return value < static_cast<float>(fraction.numerator) / fraction.denominator;
//     }

//     bool operator>=(const float& value, const Fraction& fraction) {
//         return value >= static_cast<float>(fraction.numerator) / fraction.denominator;
//     }

//     bool operator<=(const float& value, const Fraction& fraction) {
//         return value <= static_cast<float>(fraction.numerator) / fraction.denominator;
//     }

//     std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
//         os << fraction.numerator << "/" << fraction.denominator;
//         return os;
//     }

//     std::istream& operator>>(std::istream& is, Fraction& fraction) {
//         char separator;
//         is >> fraction.numerator >> separator >> fraction.denominator;
//         fraction.reduce();
//         return is;
//     }

//     // Member functions

//     void Fraction::reduce() {
//         int gcd = std::__gcd(numerator, denominator);
//         numerator /= gcd;
//         denominator /= gcd;
//     }

// }