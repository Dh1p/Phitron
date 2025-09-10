/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

vector<int>l,r;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;
        if(l==-1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if(r==-1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

bool leaf(Node* root)
{
    if(root == NULL)
        return false;

    return root->left == NULL && root->right == NULL;
}

void left(Node* root)
{
    Node* a = root;
    while(a)
    {
        l.push_back(a->val);
        if(a->left)
            a = a->left;
        else if(a->right)
            a = a->right;
        else
            break;
    }
}

void right(Node* root)
{
    Node* a = root;

    while(a)
    {
        if(!leaf(a))
        r.push_back(a->val);
        else
        {
            r.push_back(a->val);
            break;
        }
        if(a->right)
            a = a->right;
        else if(a->left)
            a = a->left;
        else
            break;
    }
}

int main()
{
    
    Node* root = input_tree();
    if(root == NULL)
        return 0;
    
    left(root->left);
    right(root->right);
    reverse(l.begin(), l.end());

    for(int val : l)
    {
        cout << val << " ";
    }
    cout << root->val << " ";
    for(int val : r)
    {
        cout << val << " ";
    }
    cout << "\n";
 

    return 0;
}