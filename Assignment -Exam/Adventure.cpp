/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> weight(n), value(n);
        for (int i = 0; i < n; i++)
            cin >> weight[i];
        for (int i = 0; i < n; i++)
            cin >> value[i];

        int dp[n + 1][c + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int w = 0; w <= c; w++)
            {
                if (i == 0 || w == 0)
                    dp[i][w] = 0;
                else if (weight[i - 1] <= w)
                    dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight[i - 1]] + value[i - 1]);
                else
                    dp[i][w] = dp[i - 1][w];
            }
        }
        cout << dp[n][c] << endl;
    }
    return 0;
}