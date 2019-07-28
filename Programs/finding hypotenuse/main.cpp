#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int p;
    cout<<"Enter value of Perpendicular> ";
    cin>> p;

    int b;
    cout<<"Enter value of Base> ";
    cin>> b;

    float hyp;
    hyp =sqrt(p*p+b*b);

    cout<<"Hypotenuse> "<<hyp;



    return 0;
}
