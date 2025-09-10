/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        int count = 0;
        string maxWord;

        map<string, int>mp;

        while(ss>>word)
        {
            mp[word]++;

            if(mp[word]>count)
            {
                count = mp[word];
                maxWord = word;
            }
        }

        cout<< maxWord << " " << count << "\n";
    }
    return 0;
}