#include <iostream>
#include "time.h"
using namespace std;

int main()
{
    Time t1(1,59,59);
    Time t2(1,0,1);

    (t1+t2).print();

    return 0;
}
