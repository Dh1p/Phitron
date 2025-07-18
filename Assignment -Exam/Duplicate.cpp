/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int &x : a)
    {
        cin>>x;
    }
    int count=0;
    for(int i=0; i<n; i++)
    {  
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                count++;
                break;
            }
            if(count>0)
            {
                break;
            }
        }
    }
    //cout<<count<<endl;
    if(count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}