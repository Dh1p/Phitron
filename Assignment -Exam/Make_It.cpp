/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

bool rc(long long cur, long long N, vector<int> &dp)
{
    if (cur == N)
        return true;
    if (cur > N)
        return false;
    if (dp[cur] != -1)
        return dp[cur];
    dp[cur] = rc(cur + 3, N, dp) || rc(cur * 2, N, dp);
    return dp[cur];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;

        vector<int> dp(N + 1, -1);

        if (rc(1, N, dp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}