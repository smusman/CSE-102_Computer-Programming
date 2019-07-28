#include <iostream>
using namespace std;
void exchange(int , int );
int main()
{   int a,b;

    cout<<"Enter num1> ";
    cin>>a;
    cout<<"Enter num2> ";
    cin>>b;

    cout<<"Before:"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    cout<<"============="<<endl;

    cout<<"After:"<<endl;
    exchange(a,b);


    return 0;
}

void exchange(int a, int b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}
