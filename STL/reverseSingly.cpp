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

// void insertTail(Node* &head , Node* &tail , int value){
//     Node* newNode = new Node(value);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }
void reverse(Node* &head , Node* curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse(head ,curr->next);
    curr->next->next = curr;
    curr->next = NULL;

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
    
    printLinkedList(head);
    reverse(head, head);
    cout << endl;
    printLinkedList(head);
    return 0;
}