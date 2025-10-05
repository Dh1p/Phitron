/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    for(char a : s)
    {
        if(a=='7')
        {
            cout << "Lucky\n";
            return 0;
        }
    }
    cout << "Not Lucky\n";
    return 0;
}