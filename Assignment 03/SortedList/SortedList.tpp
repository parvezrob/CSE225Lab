#include "SortedList.h"
#include <iostream>
using namespace std;
template <class ItemType>
SortedList<ItemType>::SortedList()
{
    length = 0;
    currentPos = - 1;
}
template <class ItemType> void SortedList<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool SortedList<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType> int SortedList<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType> void SortedList<ItemType>::ResetList()
{
    currentPos = - 1;
}
template <class ItemType>
bool SortedList<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos<length-1)
    {
        currentPos++;
        item = info [currentPos];
        return true;
    }
    return false;
}
template <class ItemType>
bool SortedList<ItemType>::InsertItem(ItemType item)
{
    int location;
    if(IsFull()){
        return false;
    }
    else{
    if(length == 0){
        location = 0;
    }
    else{

    int first = 0;
	int last = length-1;
	int middle = (first+last)/2;
	while ( first <= last )
	{
	    if(info[middle] == item){
            return false;
	    }
	    else if(item > info[middle]){
                if(info[middle+1]>item){
                    location = middle+1;
                    break;
                }
            first = middle + 1;

	    }
	    else if(item < info[middle]){
                if(info[middle-1]<item){
                    location = middle;
                    break;
                }
            last = middle - 1;

	    }
	    middle = (first + last )/2;

    }
    if(first > last){
        location = first;
    }

    }


    for (int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
    return true;
    }

}
template <class ItemType>
bool SortedList<ItemType>::DeleteItem(ItemType item)
{
    int location;
    int deleted = 0;
    int first = 0;
	int last = length-1;
	int middle = (first+last)/2;
	while (first <= last)
	{
	    if(info[middle] == item){
            deleted = 1;
            location = middle;
            break;
	    }
	    else if(item > info[middle]){
            first = middle + 1;

	    }
	    else if(item < info[middle]){
            last = middle - 1;

	    }
	    middle = (first + last )/2;

    }
    if(deleted == 0)
	{
	   cout<<"Item not found"<<endl;
	   return deleted;
	}
	for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
    return deleted;

}
template <class ItemType>
bool SortedList<ItemType>::RetrieveItem(ItemType& item)
{
    int midPoint, first = 0, last = length - 1;

    while ((first <= last) )
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
        }
        else
        {

            item = info[midPoint];
            return true;
        }
    }
    return false;
}
template <class ItemType>
void SortedList<ItemType>::print(){
  for(int i=0; i<length; i++){
    cout<<info[i]<<" ";
  }
  cout<<endl;
}
