/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void print_linked_list(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int max_val = head->data;
    int min_val = head->data;

    Node* temp = head;

    while(temp!=0)
    {
        if(temp->data>max_val)
        {
            max_val = temp->data;
        }
        if(temp->data<min_val)
        {
            min_val = temp->data;
        }

        temp = temp->next;
    }

    cout << max_val - min_val << endl;

    
    return 0;
}