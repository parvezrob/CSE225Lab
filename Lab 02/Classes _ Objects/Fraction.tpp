#include "Fraction.h"

Fraction::Fraction(){

    numerator = 0;
    denominator = 1;

}

Fraction::Fraction(int numerator, int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}

void Fraction::print(){

    cout<<numerator<<"/"<<denominator;

}

int Fraction::getNumerator(){
    return numerator;
}
void Fraction::setNumerator(int numerator){
    this->numerator = numerator;
}
int Fraction::getDenominator(){
    return denominator;
}
void Fraction::setDenominator(int denominator){
    this->denominator = denominator;
}

Fraction Fraction::add(Fraction f){
    Fraction result;
    result.numerator = (numerator*f.denominator + f.numerator*denominator);
    result.denominator = denominator*f.denominator;
    return result;
}

Fraction Fraction::multiply(Fraction f){
    Fraction result;
    result.numerator = numerator*f.numerator;
    result.denominator = denominator*f.denominator;
    return result;
}

Fraction Fraction::subtract(Fraction f){
    Fraction result;
    result.numerator = (numerator*f.denominator - f.numerator*denominator);
    result.denominator = denominator*f.denominator;
    return result;
}

Fraction Fraction::divide(Fraction f){
    Fraction result;
    result.numerator = numerator*f.denominator;
    result.denominator = denominator*f.numerator;
    return result;
}
