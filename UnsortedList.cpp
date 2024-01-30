#Christopher_Soto_Reyes
#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length = 0;
    currentPos = 0;
}

void UnsortedList::MakeEmpty() {
    length = 0;
}

bool UnsortedList::IsFull() const {
    return length == MAX_ITEMS;
}

int UnsortedList::GetLength() const {
    return length;
}

bool UnsortedList::Contains(int someItem) {
    for(int i = 0; i < length; i++)
    {
        if(arr[i] == someItem)
            return true;
    }

    return false;
}

void UnsortedList::AddItem(int item) {
    if(!IsFull())
        arr[length++] = item;
}

void UnsortedList::DeleteItem(int item) {
    for(int i = 0; i < length; i++)
    {
        if(arr[i] == item)
            arr[i] = arr[length - 1];
            length--;
            return;
    }
}

void UnsortedList::ResetIterator() {
    currentPos = 0;
}

int UnsortedList::GetNextItem() {
    return arr[currentPos++];
}

