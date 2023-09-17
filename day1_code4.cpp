#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout << "enter a year to be checked\n";
    cin >> year;
    int flag = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ? 1 : 0;
    if (flag == 1)
    {
        cout << year << " is a Leap Year" << endl;
    }
    else
    {
        cout << year << " is not a Leap Year" << endl;
    }
    return 0;
}
