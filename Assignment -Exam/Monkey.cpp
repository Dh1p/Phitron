/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[100001];
    while (cin.getline(a, 100001))
    {
        int fre[26] = {0};
        int n = strlen(a);
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                fre[a[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (fre[i] > 0)
            {
               for(int j=0; j<fre[i]; j++)
                {
                cout << char(i+'a');
                }
            }
        }
        cout << endl;
    }
    return 0;
}