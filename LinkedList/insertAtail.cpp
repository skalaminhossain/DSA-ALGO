#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    // tmp akhon last node e
    tmp->next = newNode;
}

void printLinkedList(Node *head)
{
    Node *tmp = head;
    cout << "LinkedList" << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 : Insert a tail " << endl;
        cout << "Option 2 : Print LinkedList " << endl;
        cout << "Option 3 : Terminate " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter a value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }

        if (op == 2)
        {
            printLinkedList(head);
        }

        if (op == 3)
        {
            break;
        }

        
    }
    return 0;
}