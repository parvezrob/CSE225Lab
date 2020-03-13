#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;

template <class T>
class Complex
{
public:
    Complex();
    Complex(T, T);
    T operator+(Complex);
    void Print();
private:
    T Real, Imaginary;
};
#include "Complex.tpp"
#endif // COMPLEX_H_INCLUDED
