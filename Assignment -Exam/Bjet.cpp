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

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val;
        if (temp->next)
        {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

void reorder(Node *head)
{
    if (!head || !head->next || !head->next->next)
    {
        return;
    }

    Node *slow = head;
    Node *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *prev = NULL;
    Node *curr = slow->next;
    while (curr)
    {
        Node *nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    slow->next = NULL;

    Node *first = head;
    Node *second = prev;
    while (second)
    {
        Node *tmp1 = first->next;
        Node *tmp2 = second->next;

        first->next = second;
        second->next = tmp1;

        first = tmp1;
        second = tmp2;
    }
}

int main()
{
    int n; //Number of Nodes 
    cin >> n;

    Node *head = NULL;
    for (int i = 0; i < n; i++)//values input
    {
        int val;
        cin >> val;
        insertNode(head, val);
    }

    cout << "Original list:\n";
    print(head);

    reorder(head);

    cout << "Reordered list:\n";
    print(head);

    return 0;
}