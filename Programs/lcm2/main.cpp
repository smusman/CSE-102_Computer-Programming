#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int x,y;
    cout<<"enter 2 numbers"<<endl;
    cin>>num1>>num2;
    x=num1;
    y=num2;

    while(x!=y)
    {
        if(x<y)
        {
            x=x+num1;
        }
        else
        {
            y=y+num2;
        }
    }
    cout << "LCM is "<<x<<endl;



    return 0;
}
