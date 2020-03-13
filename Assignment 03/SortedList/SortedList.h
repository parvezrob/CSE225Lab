#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED
const int MAX_ITEMS = 10;
template <class ItemType>
class SortedList
{
public :
    SortedList();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(ItemType);
    bool DeleteItem(ItemType);
    bool RetrieveItem(ItemType&);
    void ResetList();
    bool GetNextItem(ItemType&);
    void print();
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#include "SortedList.tpp"
#endif // SORTEDLIST_H_INCLUDED
