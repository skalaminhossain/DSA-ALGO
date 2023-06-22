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
    tmp->next = newNode;
}

void insertAhead(Node* &head , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void deleteAhead(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}


void insertAnyPosition(Node* head , int pos, int value){
    Node* newNode = new Node(value);
    Node* tmp = head;
    for(int i = 0; i<pos - 1; i++){
        tmp= tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next =  newNode;
    
}

void deleteAnyPosition(Node* &head , int pos){
    Node* tmp = head;
    for(int i = 0 ; i< pos - 1 ; i++){
        tmp = tmp->next;
    }
    
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;

}

void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    b->next = NULL;
    insertAtTail(head,40);
    insertAnyPosition(head, 2 , 50);
    insertAhead(head, 70);
    deleteAhead(head);
    deleteAnyPosition(head , 2);
    printLinkedList(head);
    
    return 0;
}