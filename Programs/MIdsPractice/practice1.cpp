#include <iostream>
using namespace std;
int main()
{
    int i,j,num,row;

    cout<<"Enter Num> ";
    cin>>num;

    for(row=1; row<=num; row++)
    {
        for(i=num;i>row;i--)
        {
            cout<<" ";
        }
        for(j=1;j<=row;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
