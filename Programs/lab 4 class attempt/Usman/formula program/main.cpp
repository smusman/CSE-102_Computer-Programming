#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //PROGRAM TO FIND THE FORMULA, CHECK NOTEBOOK
    int x,N,numerator,res, f,fact=1;
    cout<<"Please Enter Value of X> "<<endl;
    cin>>x;
    cout<<"Please Enter Value of N> "<<endl;
    cin>>N;

    for (int n=1;n<=N;n++)
        {
         numerator=pow(x,n)
         for (int j=1;j<=n;j++)
            {fact=fact*j
            }
           f=numerator/fact;
           res=res+f
        }




    return 0;
}
