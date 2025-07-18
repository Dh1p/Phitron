/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int p=0;

        while(true)
        {
            p = a.find(b,p);

            if(p==-1)
            {
                break;
            }

            a.replace(p,b.length(),"#");

            p++;
        }

        cout << a << endl;
        
    }
    return 0;
}