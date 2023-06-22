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

void insertAhead(Node* &head , int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;
    head = newNode;
    newNode->next = tmp;
}

void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

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

void insertAnyPosition(Node* &head , int index, int value){
    Node* newNode = new Node(value);
    if(index == 1){
        insertAhead(head,value);
        return;
    }
    else if(index == getSize(head)){
        insertAtail(head,value);
        return;
    }

    Node* tmp = head;
    int pos = 1;
    while(pos != index -1){
        tmp = tmp->next;
        pos++;
    }
    Node* tmp2 = tmp->next;
    tmp->next = newNode;
    newNode->next = tmp2;
}


void deleteAnyPosition(Node* head , int index){
    Node* tmp = head;
    for(int i = 1; i<index-1; i++){
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void deleteHead(Node* &head){
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}




int main(){
    Node* head = NULL;

    while(true){
        cout << "Option 1 : Inser a tail" << endl;
        cout << "Option 2 : print Linked List" << endl;
        cout << "Option 3 : Insert a head" << endl;
        cout << "Option 4 : Insert any position" << endl;
        cout << "Option 5 : Delete from any position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7 : Terminate" << endl;

        int op;
        cin >> op;
        if(op == 1){
            cout << "Please enter a value" << endl;
            int value ;
            cin >> value;
            insertAtail(head,value);
        }

        else if(op == 2){
            cout << "Linked List" << endl;
            printLinkedList(head);
        }
        else if(op == 3){
            cout << "Enter a value" << endl;
            int value;
            cin >> value;
            insertAhead(head,value);
        }
        else if(op == 4){
            int index;
            int value;
            cin >> index;
            cin >> value;
            insertAnyPosition(head,index,value);
        }
        else if(op == 5){
            int index;
            cout << "Enter index for deleted" << endl;
            cin >> index;
            if(index == 0){
                deleteHead(head);
            }
            deleteAnyPosition(head,index);
        }
        else if(op == 6){
            deleteHead(head);
        }
        else if(op == 7){
            break;
        }
  
    }
    return 0;
}