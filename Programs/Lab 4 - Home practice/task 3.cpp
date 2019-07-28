#include <iostream>

using namespace std;

int main()
{
int row, i , j,num;

cout<<"Enter Number>"<<flush;
cin>>num;

for(row=1;row<=num;row++)
{
    for(i=num;i>row;i--)
    {
        cout<<" ";
    }
    for(j=1;j<=row;j++)
    {
        cout<<row;
    }
    cout<<endl;
}


 return 0;
}
