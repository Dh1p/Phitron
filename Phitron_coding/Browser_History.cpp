/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node *address1(Node *head, string address)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == address)
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }

    int t;
    cin >> t;

    Node *position = head;

    while (t--)
    {
        string a;
        cin >> a;

        if (a == "visit")
        {
            string address;
            cin >> address;

            Node *b = address1(head, address);

            if (b != NULL)
            {
                position = b;
                cout << position->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (a == "next")
        {
            if (position->next != NULL)
            {
                position = position->next;
                cout << position->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (a == "prev")
        {
            if (position->prev != NULL)
            {
                position = position->prev;
                cout << position->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}