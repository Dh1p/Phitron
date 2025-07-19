/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head, Node *tail)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    cout << "R -> ";
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print(head, tail);
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    print(head, tail);
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        print(head, tail);
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

    print(head, tail);
}

void insert_at_any_pos(Node *head, Node *tail, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;

    print(head, tail);
}

int size_of_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
        int idx;
        int val;

        cin >> idx >> val;

        int sz = size_of_linked_list(head);

        if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx > 0 && idx < sz)
        {
            insert_at_any_pos(head, tail, idx, val);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}