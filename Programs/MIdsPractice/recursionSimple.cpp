#include <iostream>
using namespace std;
int usman(int num, int x=1)
{
    if(x==11)
    {   return 0;}

    cout<<"2 * "<<x<<" = "<<num*x<<endl;

    usman(num,x+1);
}

int main()
{

usman(2);

return 0;
}

//table of 2 using recursion
