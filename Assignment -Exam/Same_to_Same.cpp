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

void find_ans(Node* head1, Node* head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data != head2->data)
        {
            cout << "NO" << endl;
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if(head1 != NULL || head2 != NULL)
    {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
}

int main()
{
   
        Node *head1 = NULL;
        Node *tail1 = NULL;
        Node *head2 = NULL;
        Node *tail2 = NULL;

        int val1;
        while (true)
        {
            cin >> val1;
            if (val1 == -1)
            {
                break;
            }
            insert_at_tail(head1, tail1, val1);
        }

        int val2;
        while (true)
        {
            cin >> val2;
            if (val2 == -1)
            {
                break;
            }
            insert_at_tail(head2, tail2, val2);
        }

        find_ans(head1,head2);

    return 0;
}