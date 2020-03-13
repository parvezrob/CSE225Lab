#include <iostream>
#include "SortedList.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
SortedList<int> obj1;
    SortedList<int> sl;
    sl.InsertItem(1);
    sl.InsertItem(5);
    sl.InsertItem(3);
    sl.InsertItem(10);
    sl.InsertItem(5);
    sl.InsertItem(6);
    sl.InsertItem(1);
    sl.InsertItem(39);
    sl.InsertItem(12);


    sl.print();

    sl.DeleteItem(6);

   sl.print();
}
