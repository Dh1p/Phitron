/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &x : v)
        {
            cin>>x;
        }

        int flag = 0;
        for(int i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}