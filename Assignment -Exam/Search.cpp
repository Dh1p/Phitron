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

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void find(Node *head, int x)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            cout << count << endl;
            return;
        }
        count++;
        temp = temp->next;
    }

    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;

        find(head, x);
    }

    return 0;
}