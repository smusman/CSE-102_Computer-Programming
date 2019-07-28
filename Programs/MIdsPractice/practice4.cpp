#include <iostream>
using namespace std;

bool prime(int );

int main()

{
    int i, res ;
    for(i=2; i<=1000; i++)
    {
        res=prime(i);
        if(res==true)
        {
            cout<<" "<<i;
        }
    }


    return 0;
}

bool prime(int num)
{
    int x,y;
    y=num-1;
    for(x=2;x<=y;x++)
    {
        if(num%x==0)
        {
            return false;
        }

    }
    return true;
}
