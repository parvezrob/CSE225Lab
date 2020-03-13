#include "Fraction.h"
Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int numerator, int denominator)
{

    this->numerator = numerator;
    this->denominator = denominator;
}
void Fraction::print()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
int Fraction::getNumerator()
{
    return numerator;
}
void Fraction::setNumerator(int numerator)
{
    this->numerator = numerator;
}
int Fraction::getDenominator()
{
    return denominator;
}
void Fraction::setDenominator(int denominator)
{
    this->denominator = denominator;
}
Fraction Fraction::multiply(Fraction f)
{
    Fraction result;
    result.numerator = numerator*f.numerator;
    result.denominator = denominator*f.denominator;
    return result;
}
Fraction Fraction::operator*(Fraction f)
{
    Fraction result;
    result.numerator = numerator*f.numerator;
    result.denominator = denominator*f.denominator;
    return result;
}
Fraction Fraction::operator+(Fraction f)
{
    Fraction result;
    result.numerator = (numerator*f.denominator)+(denominator*f.numerator);
    result.denominator = denominator*f.denominator;
    return result;

}
Fraction Fraction::operator-(Fraction f)
{
    Fraction result;
    result.numerator = (numerator*f.denominator)-(denominator*f.numerator);
    result.denominator = denominator*f.denominator;
    return result;

}
Fraction Fraction::operator/(Fraction f)
{
    Fraction result;
    result.numerator = (numerator*f.denominator);
    result.denominator = (denominator*f.numerator);
    return result;
}



