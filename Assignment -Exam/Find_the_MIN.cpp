/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 1)
        {
            long long int l;
            cin >> l;
            pq.push(l);
        }
        else if (n == 2)
        {
            if (pq.empty())
                cout << "empty" << "\n";
            else
            {
                cout << pq.top() << "\n";

                int val = pq.top();
                pq.pop();
                while (!pq.empty() && pq.top() == val)
                {
                    pq.pop();
                }
            }
        }
    }
    return 0;
}