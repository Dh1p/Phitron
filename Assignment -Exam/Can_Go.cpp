/**
 *     DHIP
**/
#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level [1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    if(grid[i][j] == '#')
    {
        return false;
    }
    return true;
}

bool bfs(int si, int sj, int ti, int tj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        if(par_i == ti && par_j == tj)
        {
            return true;
        }

        for(int i = 0; i<4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                q.push({ci,cj});
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    int si = -1, sj = -1, ti = -1, tj = -1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') {
                si = i; sj = j;
            }
            if(grid[i][j] == 'B') {
                ti = i; tj = j;
            }
        }
    }

    if(si == -1 || sj == -1 || ti == -1 || tj == -1)
    {
        cout << "NO\n";
        return 0;
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    if(bfs(si, sj, ti, tj))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    
    return 0;
}