#include <iostream>
using namespace std;

struct Node{
	string data;
	Node* next;
};

void head_insert(Node* &head, string val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->next = head; 
	head = temp;
}

void insert_at_end(Node* &head, string val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->next = NULL; 
	
	Node*here = head;
	while(here->next != NULL)
	{
		here = here->next;
	}
	if(here->next == NULL)
	{
		// insert node here
		here->next = temp;
	}
}

void Search(Node* &head, string val)
{
	Node* here = head;
	while(here->data != val && here->next!= NULL)
	{
		here = here->next;
	}
	if(here-> data == val)
	{
		cout << " Value Found " << endl;
	}
	else if(here->next == NULL)
	{
		cout << " Value not Found " << endl;
	}
}

void insert_after(Node* &head, string after, string val)
{	
	int check=0;
	Node* temp = new Node;
	temp-> data = val;
	temp->next = NULL;

	Node* here = head;
	while(here->data != after && here->next!= NULL)
	{
		here = here->next;
	}
	if(here-> data == after)
	{
		temp-> next = here->next;
		here-> next = temp;
		check = 1;
	}
	else if(here-> next == NULL && check == 0)
	{
		cout << " Data not found " << endl;
		delete temp;
	}

}

void Delete_head(Node* &head){
	if(head == NULL)
		{return;}
	else{
		Node* temp = head;
		head = temp->next;
		delete temp;
	}

}

void Delete_Item(Node* &head, string val)
{
	if(head == NULL) {return;}
	else{
	Node *here = head;
	Node * prev = here;
		while(here-> data != val && here->next != NULL)
		{	
			prev = here;
			here= here->next;	
		}
		if(here->data == val)
		{
			prev -> next = here->next;
			delete here; 
		}
		else if(here->next == NULL)
		{
			cout << " Item not in list " << endl; 
		}
	}
}

void Print( Node* head )
{
	Node * here;
	here = head;
	while(here->next != NULL)
	{
		cout << " Data: " << here->data;
		cout << " Next: " << here->next << endl;
		here = here->next;

	}
	if(here->next == NULL)
	{
		cout << " Data: " << here->data;
		cout << " Next: " << here->next << endl;
	} 

}

int main()
{
Node* LL = NULL;

head_insert(LL, "First" );
insert_at_end(LL, "Second");
insert_at_end(LL, "Third");
insert_after(LL, "Second", "In-between");
Search(LL, "Third");
Print(LL);
//Delete_head(LL);
//Print(LL);
Delete_Item(LL, "Second");
Print(LL);

return  0;
}