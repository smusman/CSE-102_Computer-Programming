#include <iostream>

using namespace std;

//num=number of stars in first row/odd positive num.
//rows=row number.
//i=num of stars in a row.
//j=specific row.
//k=num of spaces in a row.

int main()
{   int num, rows, i,j,k;
    cout<<"Enter an odd positive number> ";
    cin>>num;

    rows=(num+1)/2;

    for(j=1;j<=rows;j++)
    {
        for(k=0;k<=j;k++)
        {
            cout<<" ";
        }
        for(i=1;i<=num;i++)
        {
            cout<<"*";

        }
        num=num-2;
        cout<<endl;
    }


    return 0;
}
