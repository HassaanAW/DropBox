#include <iostream>
using namespace std;

struct Node
{
	int data; 
	Node * next;

	Node(int a){
		this-> data = a;
		this-> next = NULL;
	}
	
};

class LL{
public:
	LL()
	{
		head = NULL;
	}

	void Insert_head(int a)
	{	
		Node* temp = new Node(a);
		temp->next = head; 
		head = temp;
	}

	void Search(int a)
	{		
		int check = 0;
		Node* here = head;
		while(here-> data != a && here->next != NULL)
		{
			here = here->next;
		}
		if(here->data == a)
		{
			cout << " Item found at: " << here << endl;
			check = 1;
		}
		if(here->next == NULL )
		{
			if(check == 0)
			{
				cout << " Item not Found " << endl;
			}
		}
	}
	void Delete_head(){
		if(head == NULL)
		{
			cout << " List is Empty " << endl;
			return;
		}
		
		else if(head->next == NULL)
		{
			delete head;
			head = NULL;
		}
		
		else{
			Node* here = head;
			head = here->next;
			delete here;
		}

	}
	void Delete_Last(){
		if(head == NULL )
		{
			cout << " List is Empty " << endl;
			return;
		}
		else if(head->next == NULL)
		{
			delete head;
			head = NULL;
		}
		else {
			Node * here = head;
			Node * prev = here;
			while(here->next != NULL)
			{	prev = here;
				here = here->next;
			}
			if(here->next == NULL ){
				prev->next = NULL;
				delete here;
			}
		}




	}

	void Insert_Element(int a)
	{
		Node* temp = new Node(a);

		if(head == NULL)
		{
			head = temp;
		}
		else {
		Node* here = head;
		while(here->next != NULL)
		{
			here = here->next;
		}
		if(here->next == NULL)
		{
			here->next = temp;
		}
			}
	}

	int Length(){
		int count = 0 ;
		Node* here = head;
		while(here->next != NULL)
		{
			count ++;
			here = here-> next;
		}
		if (here->next == NULL)
		{
			count ++;
		}
		return count;

	}
	void Print(){
		if(head == NULL){
			cout << " List is empty " << endl;
			return;}
		else{
			Node* here = head;
			while(here->next != NULL)
			{
				cout << " Data: " << here->data;
				cout << " Next: " << here->next << endl;  
				here = here->next;
			}
			if(here-> next == NULL){
				cout << " Data: " << here->data;
				cout << " Next: " << here->next << endl; 
			}
		}
	}

private:
	Node * head; 


};

int main()
{

LL LinkedList;

LinkedList.Insert_Element(10);
LinkedList.Insert_head(1);
LinkedList.Insert_Element(20);
LinkedList.Print();
LinkedList.Search(2);
LinkedList.Delete_head();
cout << " ------------" << endl;
LinkedList.Print();
LinkedList.Delete_Last();
cout << " ------------" << endl;
LinkedList.Print();
cout << " Length: " << LinkedList.Length() << endl;


return 0;	
}