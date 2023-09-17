#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size\n";
    cin>>n;
    int a;
   for(int i=65+n-1;i>=65;i--)
   {
    a=i;
    for(int j=65+n-1;j>=i;j--)
    {
         cout<<(char)a;
         a++;
    }
    cout<<endl;
   }
}
