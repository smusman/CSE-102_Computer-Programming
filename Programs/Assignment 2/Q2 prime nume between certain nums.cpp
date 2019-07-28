#include <iostream>
using namespace std;
bool prime(int num);
//a=first num
//b=second num


//INT MAIN
int main()
{   int num1,num2,i;
    bool b;
    cout<<"Enter Small Number> ";
    cin>>num1;
    cout<<"Enter Large Number> ";
    cin>>num2;

    if(num1>num2)
    {
        cout<<"Invalid Entry";
    }

    for(i=num1;i<=num2;i++)
    {
        b=prime(i);
        if(b==false)
        {
        cout<<i<<" ";
        }

    }

    return 0;
}
//Prime Function
bool prime(int num)
{
    bool b;
    int i;

    if(num==1 || num==2)
        {
            b=false;
            return b;
        }

    for(i=2; i<=(num-1); i++)
    {

        if(num%i==0)
        {
            b=true;
            return b;
        }
        else
        {
            b=false;
        }
    }
    return b;
}
