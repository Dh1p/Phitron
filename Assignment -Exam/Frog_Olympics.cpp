/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int leapy=0,jumpster=0;
        if(n%3==0 || n%4==0)
        {
            leapy++;
        }
        if(n%3==0 || n%5==0)
        {
            jumpster++;
        }

        if(leapy == 1 && jumpster == 1)
        {
            cout << "Both\n";
        }
        else if(leapy == 1)
        {
            cout << "Leapy\n";
        }
        else if(jumpster == 1)
        {
            cout << "Jumpster\n";
        }
        else
        {
            cout << "None\n";
        }
        
        leapy=0,jumpster=0;
    }
    return 0;
}