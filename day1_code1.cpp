#include <bits/stdc++.h>
using namespace std;
int main()
{
    int basic;
    cout << "enter basic salary\n";
    cin >> basic;
    char grade;
    cout << "enter grade\n";
    cin >> grade;
    int hra,da,allow,pf;
    int totalSalary;
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else{
        allow=1300;
    }
    hra=(0.2*basic);
    da=(0.5*basic);
    pf=(0.11*basic);
    totalSalary=(basic+hra+da+allow)-pf;//78000+15600+39000+1700-8580
    cout<<"TOTAL SALARY IS : "<<totalSalary<<endl;
    return 0;
}
