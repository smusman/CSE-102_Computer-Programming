#include <iostream>
using namespace std;
bool prime(int);

//INT MAIN
int main()
{   bool b;
    int num;

    cout<<"Enter num> ";
    cin>>num;

    b=prime(num);

    if(b==0)
    {
        cout<<"Num is Not Prime";
    }
    else
    {
        cout<<"Num is Prime";
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
            b=true;
            return b;
        }

    for(i=2; i<=(num-1); i++)
    {

        if(num%i==0)
        {
            b=false;
            return b;
        }
        else
        {
            b=true;
        }
    }
    return b;
}
