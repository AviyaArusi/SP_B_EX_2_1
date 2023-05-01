// #ifndef FRACTION_HPP
// #define FRACTION_HPP

// #include <iostream>
// #include <cmath>

// using namespace std;
// namespace ariel
// {
//     class Fraction {
//     private:
//         int numerator;
//         int denominator;

//     public:
//         // Constructors
//         Fraction();
//         Fraction(int numerator, int denominator);
//         Fraction(float value);

//         // Overloaded Operators
//         Fraction operator+(const Fraction& other) const;
//         Fraction operator-(const Fraction& other) const;
//         Fraction operator*(const Fraction& other) const;
//         Fraction operator/(const Fraction& other) const;
//         Fraction operator+(const float& value) const;
//         Fraction operator-(const float& value) const;
//         bool operator==(const Fraction& other) const;
//         bool operator>(const Fraction& other) const;
//         bool operator<(const Fraction& other) const;
//         bool operator>=(const Fraction& other) const;
//         bool operator<=(const Fraction& other) const;
//         Fraction& operator++(); // Prefix increment
//         Fraction operator++(int); // Postfix increment
//         Fraction& operator--(); // Prefix decrement
//         Fraction operator--(int); // Postfix decrement

//         // Friend functions for non-member operators
//         friend Fraction operator*(const float& value, const Fraction& fraction);
//         friend bool operator>(const float& value, const Fraction& fraction);
//         friend bool operator<(const float& value, const Fraction& fraction);
//         friend bool operator>=(const float& value, const Fraction& fraction);
//         friend bool operator<=(const float& value, const Fraction& fraction);
//         friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
//         friend std::istream& operator>>(std::istream& is, Fraction& fraction);

//         // Other member functions
//         void reduce();

//     };

// }
// #endif // FRACTION_HPP
