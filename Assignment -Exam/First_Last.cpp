/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<long long int> v1;
    vector<long long int> first(n + 1);
    vector<long long int> last(n + 1);

    for (int i = 1; i <= n; i++)
    {
        long long int val = v[i];
        if (first[val] == 0)
        {
            first[val] = i;
            v1.push_back(val);
        }
        last[val] = i;
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v1.size(); i++)
    {
        long long val = v1[i];
        int idx_first = 0, idx_last = 0;
        for (int j = 1; j <= n; j++)
        {
            if (v[j] == val)
            {
                if (idx_first == 0)
                    idx_first = j;
                idx_last = j;
            }
        }
    }
    for (int val : v1)
    {
        cout << val << " " << first[val] << " " << last[val] << "\n";
    }
    return 0;
}