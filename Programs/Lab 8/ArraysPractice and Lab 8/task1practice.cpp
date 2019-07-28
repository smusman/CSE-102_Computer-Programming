#include <iostream>
using namespace std;


int main ()
{
    int arr[5];
    int counter=0;
    int greater=0,lesser=0;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<"> ";
        cin>>arr[i];
    }

    for(int i=0;i<5;i++)
    {
        if(arr[i]==5)
        {
            counter++;
        }
    }

    for(int i=0;i<5;i++)
    {
        if(arr[i]<5)
        {
            lesser++;
        }
    }

    for(int i=0;i<5;i++)
    {
        if(arr[i]>5)
        {
            greater++;
        }
    }

    int grtvalue=arr[0];

     for(int i=0;i<4;i++)
    {
        if(arr[i]<arr[i+1])
        {
            grtvalue=arr[i+1];
        }
    }

     int lessvalue=arr[5];

    for(int i=5;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            lessvalue=arr[i-1];
        }
    }


    cout<<"Number of times 5 appears is "<<counter<<endl;

    cout<<"Numbers greater than 5 are "<<greater<<endl;

    cout<<"Numbers less than 5 are "<<lesser<<endl;

    cout<<"Maximum value is "<<grtvalue<<endl;

    cout<<"Minimum value is "<<lessvalue<<endl;

    return 0;
}
