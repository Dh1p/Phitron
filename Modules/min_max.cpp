#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >>x>>y;

    int a=min(x,y);
    int b=max(x,y);

    cout <<a<<endl<<b<<endl;

    cout <<min({78,45,6,2,7,5,5,2,6,7,4546,7,4})<<endl<<max({78,5,6,2,4,78,99,54,4})<<endl;

    return 0;
}