/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);

    for(int &x : v)
    {
        cin >> x;
    }

    v.insert(v.begin()+2,100);
    v.erase(v.begin()+3,v.end()-1);

    v.push_back(2);
    v.insert(v.end(),{2,3,2,2});
    v.insert(v.begin(),5);

    replace(v.begin(),v.end(),2,8);

    auto it = find(v.begin(),v.end(),8);

    if(it==v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for(int x : v)
    {
        cout << x << " ";
    }
    return 0;
}