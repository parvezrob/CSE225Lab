#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 10;
template <class ItemType>
class UnsortedType
{
public :

    UnsortedType();
    bool InsertItem(ItemType);
    void ResetList();
    bool GetNextItem(ItemType&);
    bool IsFull();

private:

    int length;
    ItemType *info;
    int currentPos;

};
#include "UnsortedType.tpp"
#endif // UNSORTEDTYPE_H_INCLUDED
