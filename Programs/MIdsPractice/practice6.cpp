#include <iostream>
using namespace std;
int  main()
{   int i=2,num1,num2;

    cout<<"Enter First Number> ";
    cin>>num1;
    cout<<"Enter Second Number> ";
    cin>>num2;

    while(true)
    {
        if(i%num1==0 && i%num2==0)
        {
            cout<<"LCM is "<<i<<endl;
            break;
        }
        i++;
    }

    return 0;
}
