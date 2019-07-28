#include <iostream>
#include <string>
using namespace std;
int main ()
{
    char c[100];
    int i;

    for(i=0;i<5;i++)
    {
    cout<<"Enter Name of Country "<<i+1<<"> ";
    cin.getline (c,100);
    }


    cout<<endl<<"Countries by sequence: "<<endl;
    for(i=0;i<5;i++)
    {

        cout<<i+1<<". "<<c[i]<<endl;
    }


    return 0;
}
