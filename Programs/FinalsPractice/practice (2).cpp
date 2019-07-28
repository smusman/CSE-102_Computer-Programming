#include <iostream>
using namespace std;

void sum(int i, int j)
{
    cout<<"Sum is: "<<i+j;
}

int main ()
{
    int i,j;

    cout<<"Enter first number>";
    cin>>i;

    cout<<"Enter second number>";
    cin>>j;

    sum(i,j);

    return 0;
}
