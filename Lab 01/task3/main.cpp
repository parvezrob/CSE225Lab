#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "enter the size of the row"<<endl;

    cin>> row;

    char ** arr = new char*[row];

    int col[row];

    cout<<"enter the value of un even row"<< endl;

    //taking the size of each row array
    for(int i=0; i<row; i++)
    {
        cin>> col[i];

    }
    // assinging the size of the row in coloumn

    for(int i=0; i<row; i++)
    {

        arr[i] = new char [col[i]];

    }

    cout<< "enter the value of 2D array" <<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            cin>> arr[i][j];

        }

    }

    cout<<"showing the value of the array"<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            cout<< arr[i][j]<<endl;

        }

    }

    delete [] arr;


}
