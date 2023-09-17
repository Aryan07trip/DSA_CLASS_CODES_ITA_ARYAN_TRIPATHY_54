#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cout<<"enter an uppercase character\n";
    cin>>n;
    char c2;
    for(char c='A';c<=n;c++)
    {
        c2=c;
        for(char c1='A';c1<=c;c1++)
        {
          cout<<c2;
          c2++;
        }
        cout<<endl;
    }
}
