#include <iostream>

using namespace std;
int least(int,int);

int main()
{
    int n1, n2, i=1, x,lcm;
    cout<<"This program finds the LCM of 2 numbers"<<endl;
    cout<<"Enter num1"<<endl;
    cin>>n1;
    cout<<"Enter num2"<<endl;
    cin>>n2;
    lcm=least(n1,n2);
    cout<<"lcm : "<<lcm;

return 0;
}
int least(int num1,int num2)
{
    int i=2;
        while(true)
    {
        if(i%num1==0 && i%num2==0)
        {
         break;
        }
    i++;
    }
    return i;
}
