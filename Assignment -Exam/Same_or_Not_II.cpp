/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

class MyStack
{
    public:
    vector<int>st;

    void push(int val)
    {
        st.push_back(val);
    }

    void pop()
    {
        st.pop_back();
    }

    bool empty()
    {
        return st.empty();
    }
};

class MyQueue
{
    public;
    list<int>l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MyStack s;
    MyQueue q;

    int m,n;
    cin >> m >> n;

    

    return 0;
}