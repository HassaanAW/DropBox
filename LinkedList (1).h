#include <cstdlib>
#ifndef LINKEDLIST (1)_H_
#define LINKEDLIST (1)_H_

/* This stuct just holds a single data item. */
struct ListItem
{
    int value;
    ListItem *next;
    ListItem *prev;

    ListItem(int theVal)
    {
        this->value = theVal;
        this->next = NULL;
        this->prev = NULL;
    }
};

/* This is the List class */
class LinkedList
{
    ListItem *head;
    ListItem *tail;

public:

    // Constructor
    LinkedList();

    // Copy Constructor
    LinkedList(const LinkedList& otherList);

    // Destructor
    ~LinkedList();

    // Insertion Functions
    void insertAtHead(int item);
    void insertAtTail(int item);
    void insertSorted(int item);

    // Lookup Functions
    ListItem *getHead();
    ListItem *getTail();
    ListItem *searchFor(int item);

    // Deletion Functions
    void deleteElement(int item);
    void deleteHead();
    void deleteTail();

    // Utility Functions
    int length();
    void Print();
    int Menu();
};

 #endif
