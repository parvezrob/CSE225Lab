#include "UnsortedType.h"
template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{

    length =0;
    currentPos = -1;
    info = new ItemType[length];

}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{

    currentPos = -1;

}
template <class ItemType>
bool UnsortedType<ItemType>::GetNextItem(ItemType& item)
{

    if(currentPos<length-1) {

        currentPos++;
        item = info [currentPos];
        return true;

    }
    return false;

}
template <class ItemType>
bool UnsortedType<ItemType>::InsertItem(ItemType item)
{

    if(!IsFull()) {

        info[length] = item;
        length++;
        return true;

    }
    return false;

}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}


