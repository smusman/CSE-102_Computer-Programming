#include <iostream>
using namespace std;

int main ()
{
    int i,j,count=0;

    cout<<"Enter Size of array> ";
    cin>>i;

    int arr[i];

    for(j=0;j<i;j++)
    {   cout<<"enter"<<j<<"> ";
        cin>>arr[j];
    }

    for(j=0;j<i;j++)
    {
        if(arr[j]==5)
        {
            count++;
        }
    }

    cout<<"5 appears "<<count<<" times";

    return 0;
}
