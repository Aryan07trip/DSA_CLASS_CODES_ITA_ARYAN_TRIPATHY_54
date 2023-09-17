#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 3 numbers\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "LARGEST NUMBER IS : " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "LARGEST NUMBER IS : " << b << endl;
    }
    else
    {
        cout << "LARGEST NUMBER IS : " << c << endl;
    }
    return 0;
}
