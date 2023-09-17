#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
             cout<<" ";
        }
        for(int j=1;j<=((i*2)-1);j++)
        {
         cout<<"*";
        }
        for(int j=1;j<=r-i;j++)
        {
             cout<<" ";
        }
        cout<<endl;
    }
}
