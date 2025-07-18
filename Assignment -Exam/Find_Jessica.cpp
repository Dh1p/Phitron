/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    string a = "Jessica";

    int p = 0;
    bool b = false;

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        if(word == a)
        {
            //cout << word << endl;
            b = true;
            break;
        }
    }

    if(b==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}