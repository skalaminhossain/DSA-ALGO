#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertHead(Node* &head ,Node* &tail , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertTail(Node* &head, Node* &tail , int value){
    Node* newNode = new Node(value);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insertAnyPosition(Node* head, int pos , int value){
    Node* newNode = new Node(value);
    Node* tmp = head;
    for(int i = 0; i< pos -1 ; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
//----------------------------------------------------------------
//size 
int size(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void deleteAtPosition(Node* head , int pos){
    Node* tmp = head;
    for(int i = 0; i < pos -1 ; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void deleteHead(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}

void deletTail(Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

//printing 
void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void printReverse(Node* tail){
    Node* tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
//printing end

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    insertAnyPosition(head,2 , 100);
    insertHead(head , tail , 200);
    insertTail(head,tail,400);
    insertTail(head,tail,500);
    deleteAtPosition(head,1);
    deleteHead(head);
    deletTail(tail);
    printLinkedList(head);
    cout << endl;
    printReverse(tail);
    cout << endl;
    cout << size(head) << endl;
    return 0;
}