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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int idx1 = -1, idx2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (idx1 == -1 || v[i] > v[idx1])
            {
                idx2 = idx1;
                idx1 = i;
            }
            else if (idx2 == -1 || v[i] > v[idx2])
            {
                idx2 = i;
            }
        }

        int left = min(idx1, idx2);
        int right = max(idx1, idx2);
        cout << left << " " << right << "\n";
    }

    return 0;
}