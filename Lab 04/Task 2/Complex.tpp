#include "Complex.h"

template<class T>

Complex <T>::Complex()
{
    Real = 0;
    Imaginary = 0;
}
template<class T>
Complex<T>::Complex(T  r, T i)
{
    Real = r;
    Imaginary = i;
}
template<class T>
 T Complex <T>::operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
template<class T>
void Complex<T>::Print()
{
    if (Real==0)
        cout << Imaginary<<"i"<<endl;
    else {
        if(Imaginary<0)
            cout<<Real<<Imaginary<<"i"<<endl;
        else if(Imaginary==0)
            cout<<Real<<endl;
        else
            cout<<Real<<"+"<<Imaginary<<"i"<<endl;
    }
}
