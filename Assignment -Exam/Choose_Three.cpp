/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr, sum;
        cin>>arr>>sum;
        int a[arr];
        //cout << arr << " " <<sum << endl;
        for (int i = 0; i <arr; i++)
        {
            cin >> a[i];
        }
        int fl=0;
        for(int i=0; i<arr-2; i++)
        {
            for(int j=i+1; j<arr-1; j++)
            {
                for(int k=j+1; k<arr; k++)
                {
                    if(a[i]+a[j]+a[k]==sum)
                    {
                        fl=1;
                        break;
                    }
                }
                if(fl==1)
                break;
            }
            if(fl==1)
            break;
        }

        if(fl==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}