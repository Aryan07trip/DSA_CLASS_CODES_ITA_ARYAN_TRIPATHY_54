#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    cout << "enter temperature in centigrade\n";
    cin >> temp;
    if (temp < 0)
    {
        cout << "Freezing Weather\n";
    }
    else if (temp >= 0 && temp < 10)
    {
        cout << "Very Cold Weather\n";
    }
    else if (temp >= 10 && temp < 20)
    {
        cout << "Cold Weather\n";
    }
    else if (temp >= 20 && temp < 30)
    {
        cout << "Normal in Temp\n";
    }
    else if (temp >= 30 && temp < 40)
    {
        cout << "Hot\n";
    }
    else
    {
        cout << "Very Hot\n";
    }
    return 0;
}
