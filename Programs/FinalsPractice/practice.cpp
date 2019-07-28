#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int  a,b,c;
    cout<<"Enter side a>";
    cin>>a;
    cout<<"Enter side b>";
    cin>>b;

    c=(a*a)+(b*b);
    cout<<"Hypotenuse is "<<sqrt(c);



    return 0;
}
