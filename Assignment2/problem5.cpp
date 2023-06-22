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

void printHeadAndTail(Node* head , Node* tail){
    cout << head->val << " " << tail->val << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    for(int  i = 0 ; i < q ; i++){
        int x,v;
        cin >> x >> v ;
        if(x==0){
            insertHead(head,v);
        }
        else if(x==1){
            insertTail(head,tail ,v);
        }
        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}