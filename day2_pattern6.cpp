#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int k;
    for (int i = 1; i <= n; i++)
    {
        k = i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            k++;
        }
        for (int j = k - 2; j >= i; j--)
        {
            cout << j;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
