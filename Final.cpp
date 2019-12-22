#include "LinkedList (1).cpp"

int main(){
    LinkedList Test;

    int option = Test.Menu();
    while(option != 0)
    {
    switch(option)
    {
        case 1: { int val;
        cout << " Enter value to Insert at Head: ";
        cin >> val;
        Test.insertAtHead(val);
        Test.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 2: { int val;
        cout << " Enter value to Insert at Tail: ";
        cin >> val;
        Test.insertAtTail(val);
        Test.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 3: {int val;
        cout << " Enter value to Insert in Sorted List: ";
        cin >> val;
        Test.insertSorted(val);
        Test.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 4: { ListItem* temp = Test.getHead();
        if(temp == NULL) {cout << " NULL " << endl;}
        else{
        cout << " Head Data: " << temp->value << endl;
        cout << " Head Address " << temp << endl;
        }
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 5: { ListItem* temp = Test.getTail();
        if(temp == NULL) {cout << " NULL " << endl;}
        else{
        cout << " Tail Data: " << temp->value << endl;
        cout << " Tail Address " << temp << endl;
        }
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 6: {int val;
        cout << " Enter value to Search: ";
        cin >> val;
        ListItem* temp = Test.searchFor(val);
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 7: {Test.deleteHead();
        Test.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 8: {Test.deleteTail();
        Test.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 9: {int val;
            cout << " Enter Value to Delete: ";
            cin >> val;
            Test.deleteElement(val);
            Test.Print();
            cout << endl;
            option = Test.Menu();
            break;
        }
        case 10: {
        int len;
        len = Test.length();
        cout << " Length of list is: " << len << endl;
        cout << endl;
        option = Test.Menu();
        break;
        }
        case 11: {cout << endl;
        LinkedList DLL(Test);
        DLL.Print();
        cout << endl;
        option = Test.Menu();
        break;
        }

    }
}
return 0;
}

