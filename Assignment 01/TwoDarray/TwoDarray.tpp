#include "TwoDarray.h"
#include<bits/stdc++.h>
using namespace std;

template <class T>
TwoDarray<T>::TwoDarray()
{
    data = NULL;
    row = col = 0;
}
template <class T>
TwoDarray <T>::TwoDarray(int r, int c)
{
    data = new int*[r];
    row = r;
    col = c;
    for(int i=0; i<row; i++) {
        data[i] = new int[c];
    }
}
template <class T>
TwoDarray<T>::~TwoDarray()
{
    for(int i = 0; i < row; i++) {
        delete[] data[i];
    }
    delete [] data;
}
template <class T>
T TwoDarray<T>::getValue( int row, int col)
{
    return data[row][col];
}
template <class T>
void TwoDarray<T>::setValue(int  row, int col, T value)
{
    data[row][col] = value;
}
