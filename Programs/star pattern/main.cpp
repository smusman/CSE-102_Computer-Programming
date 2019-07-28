#include <iostream>

using namespace std;

int main()
{
    int i, j,k, rows ;
    cout<<"Enter Number of rows> ";
    cin>>rows;

    for(j=1;j<=rows;j++)
    {
    for(i=0;i>=j;i++)
    {cout << " ";}
    for(k=rows;k<=i;k--)
    {cout << "*";}
    cout<<endl;

    }
    return 0;
}
