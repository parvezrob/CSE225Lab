#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction f1;

    f1.setNumerator(2);
    f1.setDenominator(6);

    Fraction f2(3,5);

    f1.print(); cout<<" + "; f2.print(); cout<<" = "; f1.add(f2).print(); cout<<endl;
    f1.print(); cout<<" - "; f2.print(); cout<<" = "; f1.subtract(f2).print(); cout<<endl;
    f1.print(); cout<<" * "; f2.print(); cout<<" = "; f1.multiply(f2).print(); cout<<endl;
    f1.print(); cout<<" / "; f2.print(); cout<<" = "; f1.divide(f2).print(); cout<<endl;


    return 0;
}
