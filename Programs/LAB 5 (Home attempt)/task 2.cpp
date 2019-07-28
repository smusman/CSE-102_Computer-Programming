#include <iostream>

using namespace std;
int power(int,int);
int factorial(int);

int main()
{   int  n, x,k;
    float s=1, a,b;

    cout<<"Please enter value of n> ";
    cin>>n;
    cout<<"Please enter value of x> ";
    cin>>x;

    for(k=1;k<=n;k++)
    {
        a= power(x,k);
        b= factorial(k);
        s=s+(a/b);
    }

    cout<<"Result is "<<s;


    return 0;
}

//Power function
int power(int b,int p)
{
    int i,j;

    j=b;

    for(i=1;i<p;i++)
    {
        b=b*j;
    }
    return b;
}

//Factorial Function
int factorial(int num){
int i;

int fact=1;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }

return fact;
}
