#include <iostream>
using namespace std;
int main ()
{

    int i,j,k,l,row;

    cout<<"Enter Odd poositive int>";
    cin>>k;
    row=k;
    for(i=0;i<(row+1)/2;i++)
    {
        for(l=0;l<i;l++)
        {
            cout<<" ";
        }
        for(j=0;j<k;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k=k-2;

    }

    return 0;
}








