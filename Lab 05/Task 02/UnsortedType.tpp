
UnsortedType::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

void UnsortedType::MakeEmpty()
{
    length = 0;
}

bool UnsortedType::IsFull()
{
    return (length == MAX_ITEMS);
}

int UnsortedType::LengthIs()
{
    return length;
}

void UnsortedType::ResetList()
{
    currentPos = -1;
}

bool UnsortedType::GetNextItem(studentInfo& item)
{
    if(currentPos<length-1)
    {
        currentPos++;
        item = info [currentPos];
        return true;
    }
    return false;
}

bool UnsortedType::RetrieveItem(studentInfo& item,int id)
{
    int location = 0;
    while ((location < length))
    {
        if(id == info[location].getId())
        {
            item = info[location];
            return true;
        }
        else
        {
            location++;
        }
    }
    return false;
}
bool UnsortedType::InsertItem(studentInfo item)
{
    if(!IsFull())
    {
        info[length] = item;
        length++;
        return true;
    }
    return false;
}

bool UnsortedType::DeleteItem(int id)
{
    int flag = 0;
    int location = 0;
    while (location < length )
    {
        if(id == info[location].getId())
        {
            flag = 1;
            break;
        }
        location++;
    }
    if(flag==1)
    {
        info[location] = info[length - 1];
        length--;
        return true;
    }
    return false;
}
