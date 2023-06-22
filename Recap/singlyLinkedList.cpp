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


//  ----------------------------------------------------------------
//Start Inserting linked List;
void insert(Node* head , int pos , int value){
    Node* newNode = new Node(value);
    Node* tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insertTail(Node* &head , Node* &tail , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insertHead(Node* &head ,int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

//End of inserting
//----------------------------------------------------------------

//----------------------------------------------------------------
// Start Deleteing Linked List

void deleteNode(Node* head , int pos){
    Node* tmp = head;
    for(int i = 0; i < pos -1; i++){
        tmp = tmp->next;
    }
    Node* deletedNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletedNode;
}

void deleteHead(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

//End Deleteing Linked List
//----------------------------------------------------------------

// size of list
int size(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
//size end
//----------------------------------------------------------------

//----------------------------------------------------------------
// pringing Linked List
void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
//End Printing
//----------------------------------------------------------------
int main(){
    Node* head  = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    Node* tail = c;
    
    insert(head, 3 ,100);
    insertHead(head, 100);
    insertTail(head, tail , 300);
    insertTail(head, tail , 400);
    printLinkedList(head);
    cout << endl;
    deleteNode(head , 3);
    deleteHead(head);

    printLinkedList(head);
    cout << endl;
    cout << size(head) << endl;
    cout << tail->val << endl;

    return 0;
}