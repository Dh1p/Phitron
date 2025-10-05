/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int tet(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;
    return tet(n - 1) + tet(n - 2) + tet(n - 3) + tet(n - 4);
}

int main()
{
    int n;
    cin >> n;
    cout << tet(n) << endl;
    
    return 0;
}