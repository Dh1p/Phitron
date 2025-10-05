/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

long long dis[1005];

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edge_list;
    for (int i = 0; i < e; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edge_list.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src;

    int q;
    cin >> q;
    vector<int> queries(q);

    for (int i = 0; i < q; i++)
        cin >> queries[i];

    for (int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;

    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] != LLONG_MAX && dis[u] + c < dis[v])
                dis[v] = dis[u] + c;
        }
    }

    bool cycle = false;

    for (auto ed : edge_list)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] != LLONG_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        for (auto ds : queries)
        {
            if (dis[ds] == LLONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << dis[ds] << endl;
        }
    }

    return 0;
}