#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
using namespace std;

template<class T>
class dynArr
{

 private:
    T *data;
    int size;
 public:
    dynArr(int);
    ~dynArr();
    void setValue(int,T);
    T getValue(int);
    int getSize();
    void print();
};
#include "dynarr.tpp"
#endif // DYNARR_H_INCLUDED
