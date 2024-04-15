#ifndef LINKED_LIST
#define LINKED_LIST

struct node {
    int num; //Integer value the list stores
    node *next; //Pointer to the next element in the list
};

class linkedList {
    public:
        //Constructors
        linkedList(); //Default constructor, initializes the head and tail as null pointers and count as zero
        linkedList(const linkedList &x); //Deep copy constructor, passes another list by reference to be copied

        //Mutators

        //Accessors
        void print();

        //Operators

    private:
        node *head; //Pointer to the first element of the list
        node *tail; //Pointer to the last element of the list
        int count; //Integer that tracks the number of elements in the list
};

#endif