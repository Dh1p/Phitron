#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x%2==0)
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD\n";
    }

    int y;
    cin >> y;

    y%2==0 ? cout << "EVEN\n" : cout << "ODD\n";

    return 0;
}