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


void minMax(Node* head){
    Node* tmp = head;
    
    int max = tmp->val;
    int min = tmp->val;

    while(tmp != NULL){
        if(tmp->val > max){
            max = tmp->val;
        }
        
        if(tmp->val < min){
            min = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << max << " " << min << endl;

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
    minMax(head);
    return 0;
}