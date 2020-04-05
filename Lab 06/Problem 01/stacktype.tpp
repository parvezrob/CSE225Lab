#include "stacktype.h"
template <class ItemType>
StackType<ItemType>::StackType()
{
    //items = new ItemType[MAX_ITEMS];
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top ==  MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack("Pop function");
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack("Top function");
    return items[top];
}
template <class ItemType>

void StackType<ItemType>::Print()
{
    for (int i=0; i<=top; i++) {
        cout <<items[i] <<endl ;
    }
    cout <<endl;
}

