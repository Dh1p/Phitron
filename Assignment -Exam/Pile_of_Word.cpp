/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "NO\n";
            continue;
        }

        int frq1[26] = {0}, frq2[26] = {0};
        for (char c : s1)
            frq1[c - 'a']++;
        for (char c : s2)
            frq2[c - 'a']++;

        bool ok = true;
        for (int i = 0; i < 26; i++)
        {
            if (frq1[i] != frq2[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}