#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter coordinates in XY system\n";
    cin >> x >> y;
    if (x >= 0 && y >= 0)
    {
        cout << x << y << " are in 1st Quadrant\n";
    }
    else if (x < 0 && y >= 0)
    {
        cout << x << y << " are in 2nd Quadrant\n";
    }
    else if (x < 0 && y < 0)
    {
        cout << x << y << " are in 3rd Quadrant\n";
    }
    else
    {
        cout << x << y << " are in 4th Quadrant\n";
    }
}
