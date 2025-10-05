/**
 *     DHIP
 **/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll add_val(ll a, ll b, ll big)
{
    if (a >= big || b >= big)
        return big;
    return a + b;
}

int main()
{
    ll n, e;
    cin >> n >> e;

    ll adj[n][n];
    ll big = 1000000000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = big;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        if (adj[a][b] > c)
            adj[a][b] = c;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll sum = add_val(adj[i][k], adj[k][j], big);
                if (sum < adj[i][j])
                    adj[i][j] = sum;
            }
        }
    }

    bool cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cycle = true;
            break;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        s--;
        d--;
        if (adj[s][d] >= big)
            cout << "-1" << endl;
        else
            cout << adj[s][d] << endl;
    }

    return 0;
}