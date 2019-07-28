#include <iostream>
using namespace std;

int main ()
{
    int arr[5];
    int temp;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<"> ";
        cin>>arr[i];
    }

    for(int  j=0;j<5;j++)
    {
        for(int i=0;i<4;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
