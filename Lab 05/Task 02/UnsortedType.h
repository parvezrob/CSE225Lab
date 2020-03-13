#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "studentinfo.h"

const int MAX_ITEMS = 5;
class UnsortedType
{
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(studentInfo);
    bool DeleteItem(int);
    bool RetrieveItem(studentInfo&,int);
    void ResetList();
    bool GetNextItem(studentInfo&);


private:
    int length;
    studentInfo info[MAX_ITEMS];
    int currentPos;
};
#include "UnsortedType.tpp"
#endif // UNSORTEDTYPE_H_INCLUDED
