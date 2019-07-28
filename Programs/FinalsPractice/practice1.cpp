#include <iostream>
using namespace std;
int main ()
{
    int i;
    cout<<"Enter Positive Integer>";
    cin>>i;

    cout<<"Factors are: ";
    for(int j=2;j<i;j++)
    {
        if (i%j==0)
        {
            cout<<j<<" ";
        }
    }

    return 0;
}
