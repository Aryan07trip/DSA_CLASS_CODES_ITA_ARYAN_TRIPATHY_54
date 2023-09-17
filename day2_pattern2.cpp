#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        k=i;
        for(int j=1;j<=i;j++)
        {
          cout<<k<<" ";
          k++;
        }
        cout<<endl;
    }
}
