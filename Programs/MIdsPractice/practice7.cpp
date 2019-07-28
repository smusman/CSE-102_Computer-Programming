#include <iostream>
using namespace std;

int main()
{
    int a, b,c,i ;

    a=1;
    b=1;
    cout<<b;

    for(i=1;i<10;i++)
    {
        cout<<","<<a;
        c=a;
        a=a+b;
        b=c;

    }

    return 0;
}
