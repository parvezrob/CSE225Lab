#include <iostream>

using namespace std;

int main()
{
    int row, col;

    cout<<"enter the row and size of the array"<<endl;
    cin>>row>>col;

    char **arr = new char*[row];

    for(int i=0; i<row; i++)
    {
        arr[i] = new char[col];

    }
    cout<<"enter the value of the array"<<endl;

    for(int i= 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> arr[i][j];

        }
    }

    cout<<"showing the values of the array" <<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< arr[i][j] <<endl;
        }
    }


    for( int i=0; i<row; i++)
    {

        delete [] arr[i];

    }

    delete [] arr;




}
