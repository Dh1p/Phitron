/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1;
    cin>>n1;
    vector<int>v1(n1);
    for(int &x : v1)
    {
        cin>>x;
    }

    int n2;
    cin>>n2;
    vector<int>v2(n2);
    for(int &x : v2)
    {
        cin >> x;
    }

    int pos;
    cin>>pos;

    v1.insert(v1.begin()+pos, v2.begin(),v2.end());

    for(int x : v1)
    {
        cout<<x<<" ";
    }

    return 0;
}