#include <iostream>
using namespace std;
int main ()
{
    int arr[10];

    int min=arr[0], max=arr[0];

    int count=0,j=0,k=0,l,m;

    cout<<"Enter index 0> ";
    cin>>arr[0];

    cout<<"Enter index 1> ";
    cin>>arr[1];

    cout<<"Enter index 2> ";
    cin>>arr[2];

    cout<<"Enter index 3> ";
    cin>>arr[3];

    cout<<"Enter index 4> ";
    cin>>arr[4];

    cout<<"Enter index 5> ";
    cin>>arr[5];

    cout<<"Enter index 6> ";
    cin>>arr[6];

    cout<<"Enter index 7> ";
    cin>>arr[7];

    cout<<"Enter index 8> ";
    cin>>arr[8];

    cout<<"Enter index 9> ";
    cin>>arr[9];

    for (int i=0; i<10;i++)
    {
        //to find 5s in arrays
        if(arr[i]==5)
        {
            count++;
        }

        //to find num greater and less than 5
        if(arr[i]>5)
        {
            j++;
        }
        if(arr[i]<5)
        {
            k++;
        }

        //to find maximum num
        if(arr[i]>arr[i-1])
        {
            max=arr[i];
        }

        //to find manimum num
        if(arr[i]<arr[i-1])
        {
            min=arr[i];
        }



    }

    cout<<"Number of times 5 appears is "<<count<<endl;
    cout<<j<<" Numbers are greater then 5"<<endl;
    cout<<k<<" Numbers are less then 5"<<endl;
    cout<<max<<" is the Maximum number in array"<<endl;
    cout<<min<<" is the Minimum number in array"<<endl;

    return 0;
}
