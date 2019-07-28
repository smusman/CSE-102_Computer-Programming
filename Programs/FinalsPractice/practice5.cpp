#include <iostream>
using namespace std;
bool prime(int );

int main ()
{
    int i;
    bool result;

    for(i=1;i<=1000;i++)
    {

        result=prime(i);
        if(result==1)
        {
            cout<<i<<" ";
        }

    }

    return 0;
}

bool prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }

    }
        return 1;
}
//prime number is a number divisible by 1 and the number itself;
//so if divisible by a number 2 to n-1 it's not a prime number.



