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
void printRecursive(Node* n){
    if(n == NULL){
        return;
    }
    cout << n->val << " ";
    printRecursive(n->next);
}

void printReverse(Node* n){
    if(n == NULL){
        return;
    }
    printReverse(n->next);
    cout << n->val << " ";
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

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insertTail(head , tail , val);
    }
    printLinkedList(head);
    cout << endl;
    printRecursive(head);
    cout << endl;
    printReverse(head);
    return 0;
}