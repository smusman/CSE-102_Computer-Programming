#include <iostream>

using namespace std;

int main()
{
    int i,r,n=0,c;
    cout<<"Enter Odd positive number> "<<flush;
    cin>>c;

    for(r=0;r<=n;r++)
    {
        for(i=0;i<r;i++)
        {
            cout<<"-";
        }


        for (n=0;n<c;n++)
        {

                cout<<"*";
        }

        c=c-2;


    cout<<endl;

    }
    return 0;
}
