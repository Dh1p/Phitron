#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    char c;
    double b;

    cin >> a >> c >> b;
    cout << a << " " << c << " " << b << endl;

    int x;

    while(cin >> x)
    {
        cout << x << endl;
    }

    double m = 457.654547;
    cout << fixed << setprecision(6) << m << endl;

    return 0;
}