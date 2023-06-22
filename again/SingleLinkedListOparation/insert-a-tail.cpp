#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    
};

void insertAtTail(Node* &head , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    //tmp akhon last node e
    tmp->next = newNode;
}

void printLinkedList(Node* head){
    cout << "Your linked list: ";
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){
    Node * head = NULL;
    while(true){
        cout << "Option 1: Insert a tail " << endl;
        cout << "Option 2: Print linked list " << endl;
        cout << "Option 3: Terminate " << endl;
        int op;
        cin >> op;
        if(op == 1){
            cout << "Enter a value to insert" << endl;
            int value ;
            cin >> value;
            insertAtTail(head, value);
        }
        else if( op == 2){
            printLinkedList(head);
        }
        else if(op == 3){
            break;
        }
    }
    
    return 0;
}