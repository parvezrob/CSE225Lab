#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType<int> stck;

    if(stck.IsEmpty())
        cout <<"stack is empty" <<endl;

    else
        cout<<"stack is not empty" <<endl;

    stck.Push(5);
    stck.Push(7);
    stck.Push(4);
    stck.Push(2);

    if(stck.IsEmpty())
        cout <<"stack is empty" <<endl;

    else
        cout<<"stack is not empty" <<endl;


    if(stck.IsFull())
        cout <<"stack is Full" <<endl;

    else
        cout<<"stack is not Full" <<endl;


    stck.Print();

    stck.Push(3);

    cout<< "2nd push"<<endl;

    stck.Print();

    if(stck.IsFull())
        cout <<"stack is Full" <<endl;

    else
        cout<<"stack is not Full" <<endl;

    stck.Pop();
    stck.Pop();

    cout<< stck.Top()<< endl;

}
