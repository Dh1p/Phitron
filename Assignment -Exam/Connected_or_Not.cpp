/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

vector<int> adj_list[1005];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int u, v;
        cin >> u >> v;

        bool f;
        if (u == v)
            f = true;
        else
            f = false;

        for (int child : adj_list[u])
        {
            if (child == v)
            {
                f = true;
                break;
            }
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}