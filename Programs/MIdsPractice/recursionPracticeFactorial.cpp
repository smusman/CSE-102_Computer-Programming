#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num==1)
    {
        return 1;
    }
    else{

    return num*factorial(num-1);
    }
}

int main()
{   int num;

    cout<<"Enter Num to Find Factorial> ";
    cin>>num;

    cout<<factorial(num);



    return 0;
}






//factorial 5!=5*4*3*2*1
