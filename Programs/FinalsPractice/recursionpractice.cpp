#include <iostream>
using  namespace std;

int factorial(int);

int main ()
{
    int i;

    cout<<"Enter n>";
    cin>>i;

    cout<<factorial(i);


    return 0;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}


