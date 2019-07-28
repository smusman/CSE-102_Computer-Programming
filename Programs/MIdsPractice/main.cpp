#include <iostream>

using namespace std;

int main()
{
    int row,num,i,j, k;

    cout<<"Please Enter Number of Stars in first Row> ";
    loop: cin>>num;
    if (num%2==0 || num<0)
    {
        cout<<"Invalid Entry, enter an odd positive number> ";
        goto loop;
    }


    else{
    row=(num+1)/2;


    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for (k=num; k>=1; k--)
        {
            cout<<"*";
        }

        num=num-2;
        cout<<endl;
    }
    }

    return 0;
}

//row=number of rows
//i=specific row
//num=num of stars in first row
//j=spaces before pattern
//k=number of stars in a row
