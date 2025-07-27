/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }

    int zero = 0, one =0;
    while(!st.empty())
    {
        char c = st.top();
        st.pop();
        if(c=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    if(zero == one)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if(isValid(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}