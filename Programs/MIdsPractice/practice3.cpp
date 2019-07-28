#include <iostream>
#include <math.h>
using namespace std;
int main()
{   float b,h,hyp;

    cout<<"Enter base> ";
    cin>>b;
    cout<<"Enter height> ";
    cin>>h;

    hyp=sqrt(b*b+h*h);

    cout<<"Hypoteneuse is "<<hyp<<endl;

    return 0;
}
