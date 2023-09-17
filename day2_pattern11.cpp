#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cout<<"enter row\n";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=((r*2)-(2*i));j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
