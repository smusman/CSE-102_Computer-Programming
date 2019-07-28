#include <iostream>
using namespace std;
int  main()
{   int i=2,num1,num2;

    cout<<"Enter First Number> ";
    cin>>num1;
    cout<<"Enter Second Number> ";
    cin>>num2;

    if(num1>num2)
   {
       i=num2;
   }
   else
   {
       i=num1;
   }

    while(true)
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<"HCF is "<<i<<endl;
            break;
        }
        i--;
    }

    return 0;
}
