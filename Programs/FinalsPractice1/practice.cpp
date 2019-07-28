#include <iostream>
using namespace std;

int main ()

{
    int MultiArr[2][4];
    int i,j;
    int k,l;

    for(j=0; j<2; j++)
    {
        for(i=0; i<4; i++)
        {
            cout<<"Enter Row "<<j+1<<","<<"Column "<<i+1<<"> ";
            cin>>MultiArr[j][i];
        }
    }

    cout<<"Enter row,column> ";
    cin>>k>>l;

    cout<<*(MultiArr[k])+l;


    return 0;
}
