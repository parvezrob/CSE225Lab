#include<bits/stdc++.h>
#include "TwoDarray.h"

using namespace std;

int main()
{
int row, col;
    cout<<"\n enter row size : ";
    cin>>row;
    cout<<"enter column size : ";
    cin>>col;
    TwoDarray <int> arr(row,col);
    cout<<"enter values :"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int value;
            cin>>value;
            arr.setValue(i,j,value);
        }

    }
    cout<<"The values are: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr.getValue(i,j)<<" , ";
        }

    }
    return 0;
}
