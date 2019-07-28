#include <iostream>
using namespace std;


int main ()
{
    int table[10],n;

    cout<<"Enter a number to display its table> ";

    cin>>n;

    for(int i=0; i<10; i++)
    {
        table[i]=(i+1)*n;
    }

    cout<<"Table of "<<n<<":"<<endl;
    cout<<endl;

    for(int i=0; i<10; i++)
    {
        cout<<n<<" x "<<i+1<<" = "<<table[i]<<endl;
    }

    return 0;
}
