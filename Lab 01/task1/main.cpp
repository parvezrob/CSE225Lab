#include <iostream>

using namespace std;

int main()
{
    int *arr, len;
    cout<<"enter the size of the array" <<endl;
    cin>>len;

    arr = new int[len];

    cout<<"enter the values of array"<< endl;

    for(int i=0; i<len; i++)
    {
        cin>>arr[i];

    }

    cout<<"printing the values of Array"<<endl;

    for(int i=0; i<len; i++)
    {

        cout<<arr[i]<<endl;

    }
    return 0;

    delete [] arr;

}
