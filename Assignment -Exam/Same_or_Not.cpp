/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    stack<int>s;
    queue<int>q;
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