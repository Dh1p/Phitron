/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < t-2; i++)
    {
        if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') ||
            (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}