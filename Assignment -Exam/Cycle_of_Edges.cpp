/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

const int N = 100000 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = dsu_find(par[node]);
}

bool dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (leaderA == leaderB)
        return false;

    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
    return true;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);

    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        if (!dsu_union_by_size(u, v))
            cycleEdges++;
    }
    cout << cycleEdges << endl;

    return 0;
}