#include <iostream>

using namespace std;

int main()
{
    int num,x;

    cout<<"Enter a number you want to Reverse> ";

    cin>>num;
    cout<<"Reverse is ";
    while(num>0)
    {
    cout<<num%10;
    num=num/10;
    }
}

