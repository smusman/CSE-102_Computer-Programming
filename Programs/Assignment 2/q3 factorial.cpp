#include <iostream>
using namespace std;
int factorial(int num);

int main()
{   int num;
    cout<<"Enter number> ";
    cin>>num;
     cout<<factorial(num);


    return 0;
}
int factorial(int num){
int i;

int fact=1;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }

return fact;
}
