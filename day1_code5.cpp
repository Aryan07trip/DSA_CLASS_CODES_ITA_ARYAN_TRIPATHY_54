#include <bits/stdc++.h>
using namespace std;
int main() {
    int d,m,y,dd,c,date;
    cout<<"Enter date month year\n";
    cin>>d>>m>>y;
    if(m>12||m<1)
        cout<<"Incorrect Date";
    else if(d>31||d<1)
        cout<<"Incorrect Date";
    else if (m==2&&d>29)
        cout<<"Incorrect Date";
    else if((m==4||m==6||m==9||m==11)&&(d>30))
        cout<<"Incorrect Date";
    else
    {
        if(m==1||m==2)
           {
               m=m+10;
               y=y-1;
           }
        else
            m=m-2;
        dd=y%100;
        c=y/100;
        
        date=(d+(13*m-1)/5+dd+dd/4+c/4+5*c)%7;
        switch(date)
        {
                case 0:
                   cout<<"Sunday";
                   break;
                case 1:
                   cout<<"Monday";
                   break;
                case 2:
                   cout<<"Tuesday";
                   break;
                case 3:
                   cout<<"Wednesday";
                   break;
                case 4:
                   cout<<"Thursday";
                   break;
                case 5:
                   cout<<"Friday";
                   break;
                case 6:
                   cout<<"Saturday";
                   break;
                
        }
    }
    
    return 0;
}
