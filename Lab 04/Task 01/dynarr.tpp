#include "dynarr.h"

template<class T>

dynArr<T>::dynArr(int s)
{
    data = new T[s];
    size = s;
}

template<class T>
dynArr <T>::~dynArr()
{
    delete [] data;
}
template<class T>

T dynArr<T>::getValue(int index)
{
    return data[index];
}
template<class T>

void dynArr<T>::setValue(int index, T value)
{
    data[index] = value;
}
template<class T>

int dynArr<T>::getSize()
{
    return size;
}

template <class T>
void dynArr<T>:: print()
{
    cout<<"The values are: "<<endl;
    for(int i =0; i<getSize(); i++)
    {
        cout<<getValue(i)<<" , ";
    }
    cout<<endl;
}
