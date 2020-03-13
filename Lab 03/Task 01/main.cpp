#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
   Fraction f1(2,4);
   Fraction f2(4,4);
   Fraction f3;
   f3 = f1*f2;

   f3.print();

   Fraction f4(1,4);
   Fraction f5(1,4);
   Fraction f6;
   f6 = f4+f5;
   f6.print();
   f6 = f4-f5;
   f6.print();
   f6 = f4/f5;
   f6.print();



}
