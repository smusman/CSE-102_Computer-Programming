#include <iostream>

using namespace std;

int main()
{
   int n1, n2, i;

   cout<<"This program will fine the HCF of 2 numbers"<<endl;

   cout<<"Enter Num1> "<<flush;
   cin>>n1;

   cout<<"Enter Num2> "<<flush;
   cin>>n2;

   if(n1>n2)
   {
       i=n2;
   }
   else
   {
       i=n1;
   }
   while (true)
   {
       if(n1%i==0 && n2%i==0)
       {
           cout<<"HCF is: "<<i<<endl;
           break;
       }
    i--;
   }


    return 0;
}
