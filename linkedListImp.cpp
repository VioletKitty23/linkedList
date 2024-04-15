#include <iostream>
#include "linkedList.h"
using namespace std;

/*
    Constructor function definitions
*/
linkedList::linkedList()
{
    //With no elements yet, the pointers are null pointers, and the element counter is zero
    head = nullptr;
    tail = nullptr;
    count = 0;
}

linkedList::linkedList(const linkedList &x)
{
    if(x.count == 0){ //If the list being copied has no elements, it is functionally the same as the default constructor
        head = nullptr;
        tail = nullptr;
        count = 0;
    }
}

/*
    Accessor
*/
void linkedList::print()
{
    node *current; //Creates a pointer to a node
    current = head; //Assigns the new pointer to the same as the head, so that the head isn't modified while iterating through the list

    while(current != nullptr){ //Will run until the "current" pointer is a null pointer, meaning it reached the end of the list
        cout << current -> num << " -> "; //Outputs the list element
        current = current->next; //Updates the pointer to the next element in the list
    }

    cout << endl;
}