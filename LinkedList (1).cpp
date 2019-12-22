#include <iostream>
#include "LinkedList (1).h"
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}


LinkedList::LinkedList(const LinkedList& otherList)
{
    ListItem* here = otherList.head;
    ListItem* traverse = NULL;

    if(here->next == NULL){
    ListItem* temp = new ListItem(here->value);
    head = temp;
    tail = temp;
    }
    else{
    while(here->next != NULL)
    {
        if(traverse == NULL)
        {
            ListItem* temp = new ListItem(here->value);
            head =  temp;
            tail = temp;
            traverse = temp;
        }
        else{
            ListItem* temp = new ListItem(here->value);
            temp->prev = traverse;
            traverse->next = temp;
            tail = temp;
            traverse = temp;
        }
        here = here->next;
    }
    if(here->next == NULL)
    {
        ListItem* temp = new ListItem(here->value);
        temp->prev = traverse;
        traverse->next = temp;
        tail = temp;
        traverse = temp;
    }

    }

}


LinkedList::~LinkedList()
{
    while(head != NULL && tail != NULL)
    {
        deleteHead();
    }

}


void LinkedList::insertAtHead(int item)
{
if(head == NULL)
    {   ListItem* temp = new ListItem(item);

        temp->value = item;
        temp->next = NULL;
        temp->prev = NULL;

        head = temp;
        tail = temp;
    }
else{
        ListItem* temp = new ListItem(item);

        temp->value = item;
        temp->next = head;
        temp->prev = NULL;

        head->prev = temp;
        head = temp;

        ListItem* here = head;

        while(here->next != NULL)
        {
            here = here->next;
        }
        if(here->next == NULL)
        {
            tail = here;
        }
}

}


void LinkedList::insertAtTail(int item)
{
if(tail == NULL)
    {   ListItem* temp = new ListItem(item);

        temp->value = item;
        temp->next = NULL;
        temp->prev = NULL;

        head = temp;
        tail = temp;
    }
else{
        ListItem* temp = new ListItem(item);
        temp->value = item;
        temp->next = NULL;
        temp->prev = tail;

        tail->next = temp;
        tail = temp;
}
}


void LinkedList::insertSorted(int item)
{
    int check = 0;
    ListItem* temp = new ListItem(item);
    ListItem* here = head;

    while(check == 0){

    if( here->value <= item && here->next == NULL )
    {
        temp->prev = here;
        temp->next = NULL;
        here->next = temp;
        tail = temp;
        check = 1;
    }


    else if(here->value <= item && here->next->value >= item)
    {
        temp->prev = here;
        temp->next = here->next;
        here->next->prev = temp;
        here->next = temp;
        check = 1;
    }
    else if(here->value >= item && here->prev == NULL)
    {
        here->prev = temp;
        temp->next = here;
        temp->prev = NULL;
        head = temp;
        check = 1;
    }
    else{ here = here->next; }

    }
}


ListItem* LinkedList::getHead()
{
    if(head == NULL)
    {
        return NULL;
    }
    else{
        return head;
    }
}


ListItem* LinkedList::getTail()
{
    if(tail == NULL){
        return NULL;
    }
    else{
        return tail;
    }
}


ListItem *LinkedList::searchFor(int item)
{
    ListItem* here = head;
    if(here == NULL)
    {
        cout << " List already empty " << endl;
        return NULL;
    }

    else{
        while(here->value != item && here->next != NULL)
        {
            here = here->next;
        }

        if(here->value == item)
        {   cout << " Value found at address " << here << endl;
            return here;}
        else{
            cout << " Value not Found " << endl;
            return NULL;}
    }

}


void LinkedList::deleteElement(int item)
{
     if(head == NULL){
        cout << " List is already empty " << endl;
        return ; }
    else if(head->value == item && head->next == NULL )
    {
       delete head;
       delete tail;
       head = NULL;
       tail = NULL;
    }
    else if(head->value == item && head->next != NULL )
    {
       head = head->next;
       delete head->prev;
       head->prev = NULL;
    }
    else if(tail->value == item)
    {
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }
    else{
        ListItem* here = head;
        while(here->value != item && here->next != NULL )
        {
            here = here->next;
        }
        if(here->value == item)
        {
            here->prev->next = here->next;
            here->next->prev = here->prev;
            delete here;
        }
        else{
            cout << " Input number not in list " << endl;
            return;
        }
    }

}


void LinkedList::deleteHead()
{
    if(head == NULL)
    {cout << " List is already empty " << endl; }
    else if(head->next == NULL)
    {
        delete head;
        delete tail;
        head = NULL;
        tail = NULL;
    }
    else{
        head = head->next;
        delete head->prev;
        head->prev = NULL;
    }

}


void LinkedList::deleteTail()
{
    if(head == NULL)
    {cout << " List is already empty " << endl; }
    else if(head->next == NULL)
    {
        delete head;
        delete tail;
        head = NULL;
        tail = NULL;
    }
    else{
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }
}


int LinkedList::length()
{
    int counter = 0;
    ListItem* here = head;
    if(here == NULL)
    {
        return counter;
    }
    else{
        while(here->next != NULL)
        {
            counter ++;
            here = here->next;
        }
        counter ++;
        return counter;
    }
}

void LinkedList::Print(){

    ListItem* here = head;
    if(here == NULL)
    {
        cout << " List is empty " << endl;
    }
    else{
        while(here->next != NULL)
        {
            cout << " " << here->prev << " <-- Previous " << " Value: " << here->value << " Next --> " << here->next << endl;
            here= here->next;
        }
        if(here->next == NULL)
        {
            cout << " " << here->prev << " <-- Previous " << " Value: " << here->value << " Next --> " << here->next << endl;
        }
    }


}

int LinkedList::Menu()
{   int choice;
    cout << " 1. Insert At Head " << endl;
    cout << " 2. Insert At Tail " << endl;
    cout << " 3. Insert in Sorted List " << endl;
    cout << " 4. Get Head " << endl;
    cout << " 5. Get Tail " << endl;
    cout << " 6. Search For Value " << endl;
    cout << " 7. Delete Head " << endl;
    cout << " 8. Delete Tail " << endl;
    cout << " 9. Delete Value " << endl;
    cout << " 10. Get Length " << endl;
    cout << " 11. Copied Linked List " << endl;
    cout << " 0. Quit " << endl;
    cin >> choice;

    while(cin.fail() || (choice < 0 || choice > 11 ) )
    {
        cin.clear();
        string dummy;
        getline(cin, dummy);
        cout << " Enter Appropriate Value: ";
        cin >> choice;
    }
return choice;
}

