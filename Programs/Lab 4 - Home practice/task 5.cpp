#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x=0, y=0, x1, y1,n=0,  t=0,a,b,c;
    float s


    do{
    cout<<"input x1> "<<flush;
    cin>>x1;
    cout<<"input y1> "<<flush;
    cin>>y1;
    }while(x1<=0 || y1<=0);
    {
        if(x1==x && y1==y)
        {
            goto c;
        }
        else
        {
            n++;
           a=(x1-x)*(x1-x);
           b=(y1-y)*(y1-y);
           c=a+b;
           s=sqrt(c);
           t=t+s;
           x=x1;
           y=y1;



        }
    }

    c:
        cout<<"Total Distance= "<<t;
        cout<<"Steps= "<<s;



    return 0;
}
