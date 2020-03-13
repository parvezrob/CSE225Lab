#include <iostream>
#include "UnsortedType.h"
using namespace std;

int main()
{
    UnsortedType<int> list;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);

    int x;
    while(list.GetNextItem(x))
    {
        cout<<x<<endl;
    }

    cout<< "the length is : "<<list.LengthIs()<<endl;

    list.InsertItem(1);
    list.ResetList();

    while(list.GetNextItem(x))
    {
        cout<<x<<endl;
    }

    int r=4;

    if(!list.RetrieveItem(r))
    {
     cout<<"not found"<<endl;

    }
   else
   {
     cout<<"found" <<endl;
   }
   int q=5;

    if(!list.RetrieveItem(q))
    {
     cout<<"not found"<<endl;

    }
   else
   {
     cout<<"found" <<endl;
   }


    int h=9;

    if(!list.RetrieveItem(h))
    {
     cout<<"not found"<<endl;

    }
   else
   {
     cout<<"found" <<endl;
   }
   int o=10;

    if(!list.RetrieveItem(o))
    {
     cout<<"not found"<<endl;

    }
   else
   {
     cout<<"found" <<endl;
   }
 bool z= list.IsFull();

   if(z)
   {

     cout<<"is full"<<endl;
   }
   else
   {

     cout<<"not full"<<endl;
   }
   list.DeleteItem(5);

   bool zz= list.IsFull();

   if(zz)
   {

     cout<<"is full"<<endl;
   }
   else
   {

     cout<<"not full"<<endl;
   }

   list.DeleteItem(1);
   list.ResetList();
   while(list.GetNextItem(x))
    {
        cout<<x<<endl;
    }
   cout<<endl;
    list.DeleteItem(6);
    list.ResetList();
   while(list.GetNextItem(x))
    {
        cout<<x<<endl;
    }



}
