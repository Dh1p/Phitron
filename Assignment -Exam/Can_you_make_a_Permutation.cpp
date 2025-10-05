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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum_n = 0;

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val >= 1 && val <= n)
                s.insert(val);
        }

        sum_n = n - s.size();

        if (sum_n <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}