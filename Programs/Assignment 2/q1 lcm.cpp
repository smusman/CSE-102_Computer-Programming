#include <iostream>

using namespace std;
int lcm(int a,int b); //Function prototype

int main()
{
    int a,b;

    cin>>a;
    cin>>b;

    cout<<lcm(a,b);

    return 0;
}

int lcm(int a,int b) //LCM function
{   int i=2;
    while(true)
    {

        if(i%a==0 && i%b==0)
        {

           return i;
        }
        i++;

    }
}
