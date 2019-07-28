#include <iostream>

using namespace std;

int add(int , int);

int main()
{
    int a,b,sum;
    cout<<"Enter First num> ";
    cin>>a;

    cout<<"Enter Second num> ";
    cin>>b;

    sum= add(a,b);
    cout<<"The sum is: "<<sum;

    return 0;
}

int add(int a, int b)
{   int s;
    s=a+b;
    return s;
}

