#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "ENTER 3  SIDES OF A TRIANGLE\n";
    cin >> a >> b >> c;
    if (a == b && a == c&&b==c)
    {
        cout << "EQUILATERAEL TRIANGLE\n";
    }
    else if (a != b && b != c&&a!=c)
    {
        cout << "SCALENE TRIANGLE\n";
    }
    else
    {
        cout << "ISOSCELES TRIANGLE\n";
    }
    return 0;
}
