#include <iostream>
#include "UnsortedType.h"
#include "studentinfo.h"
using namespace std;

int main()
{
    UnsortedType List ;

    studentInfo s1(15234, "Abdullah", 2.6);
    List.InsertItem(s1);

    studentInfo s2(13732, "Muhammad", 3.9);
    List.InsertItem(s2);

    studentInfo s3(13569, "Ali", 1.2);
    List.InsertItem(s3);

    studentInfo s4(15467, "Saad", 3.1);
    List.InsertItem(s4);


    studentInfo s5(16285, "Mahdi", 3.1);
    List.InsertItem(s5);

    studentInfo x;
    while(List.GetNextItem(x)) {
        x.print();

    }

    List.ResetList();
    List.DeleteItem(15467);

    cout<<"Delete Block" <<endl;

    while(List.GetNextItem(x)) {
        x.print();
    }

    List.ResetList();

    cout<<"retrieve Block.." <<endl;
    int r =13569;



    if(List.RetrieveItem(x,r)) {
        cout<<"item Found"<<endl;
        x.print();

    } else
        cout<<"could not found"<<endl;




    cout<<"printing the list"<<endl;
    List.ResetList();

    while(List.GetNextItem(x)) {
        x.print();

    }



}
