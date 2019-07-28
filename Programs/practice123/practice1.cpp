#include <iostream>

using namespace std;

void add(int a,int b)
{
    cout<<"The Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}


int main ()
{
    int a,b,sum;

    cout<<"Enter first num> ";
    cin>>a;
    cout<<"Enter Second num>";
    cin>>b;

    add(a,b);

    return 0;
}
