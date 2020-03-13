//#include <iostream>
#include<bits/stdc++.h>
#include"dynarr.h"
using namespace std;

int main()

{
    int  len;
    cout <<"enter the size of the array"<<endl;
    cin>>len;

    dynArr<int> arr(len);

    int data;
    for(int i =0; i<len; i++) {
        cout<<"Enter the value of Array "<< i+1 <<": ";

        cin>>data;
        arr.setValue(i,data);

    }
    cout<<"The values are: "<<endl;

    arr.print();
    arr.~dynArr(); // deallocating
    arr.print();  // but why is it printing?
    return 0;
}

