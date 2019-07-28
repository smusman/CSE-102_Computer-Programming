#include <iostream>

using namespace std;
int fact(int n);

int main()
{
    int num,result;

    cout<<"Enter num to find factorial> ";
    cin>>num;

    result=fact(num);

    cout<<"Factorial is "<<result<<endl;




    return 0;
}

int fact(int n)
{
    if(n==1)
    {return 1;}
    else
    {
        return n*fact(n-1);
    }
}
