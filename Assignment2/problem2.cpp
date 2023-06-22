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


int main(){
    Node* list1 = NULL;
    Node* list2 = NULL;
    int value;
    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        insertAtail(list1,value);
    }
    int value2;
    while(true){
        cin >> value2;
        if(value2 == -1){
            break;
        }
        insertAtail(list2,value2);
    }

    int size1 = getSize(list1);
    int size2 = getSize(list2);

    if(size1 == size2){
            while(list1 != NULL && list2 != NULL){
                if(list1->val != list2->val){
                    cout << "NO" << endl;
                    break;

                }else{
                    cout << "YES" << endl;
                    break;
                }
    }
    }else{
        cout << "NO" << endl;
    }


    return 0;
}