#include <iostream>

using namespace std;

int main()
{
    int x, i,j;

    cout<<"Enter positive odd integer> ";
    cin>>x;

    if(x>0 && x%2!=0)
        {
            for (j=1;j<=x;j++)
        {


            for (i=1;i<=x;i++)
            {
                if (j<=i)
                {cout<<"*";}
                else
                {
                 cout<<"-";
                }

            }
            cout<<endl;

            x--;
        }

    }

    else
    {
    cout<<"Invalid Entry";
    }



    return 0;
}
