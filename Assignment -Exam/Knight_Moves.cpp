/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int level[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int, int>> d = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]);
}

int bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        if (par_i == di && par_j == dj)
        {
            return level[par_i][par_j];
        }

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj))
            {
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                q.push({ci, cj});
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        int si, sj, ti, tj;
        cin >> si >> sj;
        cin >> ti >> tj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        cout << bfs(si, sj, ti, tj) << "\n";
    }
    return 0;
}