#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int, int);
    int getNumerator();
    void setNumerator(int);
    int getDenominator();
    void setDenominator(int);
    Fraction multiply(Fraction);
    Fraction operator*(Fraction);
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator/(Fraction);


    void print();
};
#include "Fraction.tpp"
#endif // FRACTION_H_INCLUDED
