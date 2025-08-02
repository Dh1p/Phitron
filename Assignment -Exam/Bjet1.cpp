/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

string NewString(string s, int k)
{
    string clean;
    for (char c : s)
    {
        if (c != '-')
        {
            clean += toupper(c);
        }
    }

    string result;
    int count = 0;
    for (int i = (int)clean.size() - 1; i >= 0; i--)
    {
        result += clean[i];
        count++;

        if (count == k && i != 0)
        {
            result += '-';
            count = 0;
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;//Input Lisence and group

    string formatted = NewString(s, k);
    cout << formatted << endl;

    return 0;
}