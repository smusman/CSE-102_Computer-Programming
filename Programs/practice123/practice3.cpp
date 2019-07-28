#include <iostream>
using namespace std;
int main ()
{
    int arr[10],i,temp,j;

    for (i=0;i<10;i++)
    {
        cout<<"Enter Num"<<i<<"> ";
        cin>>arr[i];
    }

    for(j=0;j<10;j++)
    {
    for(i=0;i<10;i++)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }

    cout<<"Sorted array in Descending order: "<<endl;

    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }


    return 0;
}
/*
1 2 3
2 1 3
2 3 1
3 2 1*/
