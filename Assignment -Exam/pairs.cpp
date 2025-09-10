/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,vector<int>>mp;
    int t;
    cin>>t;
    while(t--)
    {
        string name;
        int val;
        cin>>name>>val;
        mp[name].push_back(val);
    }

    for(auto it : mp)
    {
        sort(it.second.begin(), it.second.end(), greater<int>());
        for(int val : it.second)
        {
            
        }
    }
    return 0;
}