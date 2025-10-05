/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    if (grid[i][j] == '#' || vis[i][j])
    {
        return false;
    }
    return true;
}

bool bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> curr = q.front();
        q.pop();
        int i = curr.first;
        int j = curr.second;

        if (i == di && j == dj)
            return true;

        for (int k = 0; k < 4; k++)
        {
            int ni = i + d[k].first;
            int nj = j + d[k].second;

            if (valid(ni, nj))
            {
                vis[ni][nj] = true;
                parent[ni][nj] = {i, j};
                q.push({ni, nj});
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    int si = -1, sj = -1, di = -1, dj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            vis[i][j] = false;
            parent[i][j] = {-1, -1};
        }

    if (si != -1 && di != -1 && bfs(si, sj, di, dj))
    {
        int ci = di, cj = dj;
        while (!(ci == si && cj == sj))
        {
            auto p = parent[ci][cj];
            if (p.first == -1)
                break;
            if (grid[p.first][p.second] == '.')
                grid[p.first][p.second] = 'X';
            ci = p.first;
            cj = p.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}