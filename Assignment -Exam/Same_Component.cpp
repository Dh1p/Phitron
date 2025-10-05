/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    if (grid[i][j] == '-')
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    int cnt = 1;

    while (!q.empty())
    {
        auto [par_i, par_j] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    memset(vis, false, sizeof(vis));

    if(grid[x1][y1] ==  '-' || grid[x2][y2] == '-')
    {
        cout << "NO\n";
        return 0;
    }

    bfs(x1, y1);

    if (vis[x2][y2])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}