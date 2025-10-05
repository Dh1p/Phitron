/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<char>v;

        for(char c : s)
        {
            if(!v.empty() && v.back() == c)
            {
                v.pop_back();
            }
            else
            {
                v.push_back(c);
            }
        }
        cout << v.size() << "\n";
    }
    return 0;
}