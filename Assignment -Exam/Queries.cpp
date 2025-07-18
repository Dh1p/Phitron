/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void delete_node(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *del = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete del;
        return;
    }

    Node *temp = head;
    int count = 0;
    while (temp != NULL && count < idx - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    Node *del = temp->next;
    temp->next = del->next;

    if (del == tail)
    {
        tail = temp;
    }
    delete del;
}


void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}


int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int n, val;
        cin >> n >> val;
            
        if(n==0)
        {
            insert_at_head(head, tail, val);
        }
        else if(n==1)
        {
            insert_at_tail(head, tail, val);
        }
        else if(n==2)
        {
            delete_node(head, tail, val);
        }

        print_linked_list(head);
       
    }

    return 0;
}