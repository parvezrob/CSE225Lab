#include <iostream>
#include "UnsortedType.h"

using namespace std;

int main()
{
    UnsortedType <int> x;

    x.InsertItem(4);
    x.InsertItem(5);
    x.InsertItem(6);
    x.InsertItem(4);
    x.InsertItem(5);
    x.InsertItem(6);
    x.InsertItem(4);
    x.InsertItem(5);
    x.InsertItem(6);
    x.InsertItem(4);
    x.InsertItem(5);
    x.InsertItem(6);
    x.InsertItem(4);
    x.InsertItem(5);
    x.InsertItem(6);


    int a;

    while(x.GetNextItem(a)) {
        cout<<a<<endl;

    }

}
