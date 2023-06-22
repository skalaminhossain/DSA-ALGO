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

void insertAtail(Node* &head ,int value){
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

int getSize(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        tmp = tmp->next;
        count++;
    }
    return count;
}

void findMid(Node* head){
    int size = getSize(head);
    int mid = (size + 1)  / 2;
    Node* tmp = head;
    for(int i = 0; i < mid -1; i++){
        tmp = tmp->next;
    }

    if(size % 2 == 0){
        cout << tmp->next->val << " " << tmp->val << endl;
    }else{
        cout << tmp->val << endl;
    }
}

int main(){
    Node* head = NULL;
    int value;
    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        insertAtail(head,value);
    }

    for(Node* i = head; i->next != NULL; i=i->next){
        for(Node*j = i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }

    }
    findMid(head);
    return 0;
}