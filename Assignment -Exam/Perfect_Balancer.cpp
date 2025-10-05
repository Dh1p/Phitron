/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
    }
    long long int left = 0;
    for(int i=0; i<n; i++)
    {
        if(left + v[i] == sum - left)
        {
            cout << left + v[i] << " " << i+1 << "\n";
            return 0;
        }
        left += v[i];
    }
    cout << "UNSTABLE\n";

    return 0;
}