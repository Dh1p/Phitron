/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //vector<int>v;
    priority_queue<int,vector<int>,greater<int>>v;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        v.push(val);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int cmd;
        cin>>cmd;

        if(cmd==0)
        {
            int x;
            cin>>x;
            v.push(x);
        }
        if(v.empty())
        {
            cout << "Empty\n";
            continue;
        }

        //auto minIt = min_element(v.begin(),v.end());

        if(cmd == 1)
        {
            cout << v.top() <<"\n";
        }

        else if(cmd == 2)
        {
            v.pop();

            if(v.empty())
            {
                cout<<"Empty\n";
            }
            else
            {
                cout <<v.top()<<"\n";
            }
        }
        else if(cmd==0)
        {
            cout << v.top() << "\n";
        }
    }
    return 0;
}