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

    int top()
    {
        return st.back();
    }

    bool empty()
    {
        return st.empty();
    }
};

class MyQueue
{
    public:
    list<int>l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
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

    if(m!=n)
    {
        cout<< "NO" << endl;
    }
    else
    {
        for(int i=0; i<m; i++)
        {
            int val;
            cin >> val;
            s.push(val);
        }

        for(int i=0; i<n; i++)
        {
            int val;
            cin >> val;
            q.push(val);
        }
        int fl = 0;
        while(!s.empty() && !q.empty())
        {
            if(s.top()!=q.front())
            {
                cout << "NO" << endl;
                fl = 1;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }

        if(fl == 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}