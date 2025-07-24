/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

/*----------Node Creation*----------*/
class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

/*----------Print Linkde List----------*/
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

/*----------Insert at Head----------*/
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode; 
        return;
    }
    newNode->next = head;
    head = newNode;
}

/*----------Insert at Tail----------*/
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);
    
    head->next = a;
    a->next = b;
    b->next = tail;

    insert_at_head(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_linked_list(head);



    return 0;
}