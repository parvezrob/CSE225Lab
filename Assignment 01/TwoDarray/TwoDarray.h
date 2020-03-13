
#ifndef TWODARRAY_H_INCLUDED
#define TWODARRAY_H_INCLUDED
template <class T>
class TwoDarray
{
    private:
        int **data;
        int row;
        int col;
    public:
       TwoDarray();
        TwoDarray(int, int);
        ~TwoDarray();
        void setValue(int, int, T);
        T getValue(int, int);
};

#include "TwoDarray.tpp"

#endif // TWODARRAY_H_INCLUDED
