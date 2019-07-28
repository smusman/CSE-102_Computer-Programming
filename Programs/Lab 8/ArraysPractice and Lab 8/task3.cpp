#include <iostream>
using namespace std;
int main()
{
    int arr[10],j,temp,i;


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

    for(i=0; i<10; i++)
    {
        for(j=i+1;j<10;j++)
        {

        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

        }

        cout<<arr[i]<<endl;

    }





    return 0;
}
