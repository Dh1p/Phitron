/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    list<int> l;

    while (t--)
    {
        int x;
        int v;

        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < l.size())
            {
                l.erase(next(l.begin(), v));
            }
        }

        cout << "L -> ";
        for (int x : l)
        {
            cout << x << " ";
        }
        cout << '\n';

        l.reverse();

        cout << "R -> ";
        for (int x : l)
        {
            cout << x << " ";
        }
        cout << '\n';

        l.reverse();
    }

    return 0;
}