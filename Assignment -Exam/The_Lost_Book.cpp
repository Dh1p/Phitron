/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    int target;
    cin >> target;

    int index = -1;
    for(int i =0 ; i<n; i++)
    {
        if(v[i]==target)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;
    
    return 0;
}