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
void insertHead(Node* &head , int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
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

int getSize(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        count++;
    }
    return count;
}



void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int pos , val;
    cin >> pos >> val;
    if(pos > getSize(head)){
        cout << "Invalid ";
    }else if(pos == 0){
        insertHead(head,val);
    }else if(pos == getSize(head)){
        insertTail(head,tail,val);
    }

    printLinkedList(head);
    return 0;
}