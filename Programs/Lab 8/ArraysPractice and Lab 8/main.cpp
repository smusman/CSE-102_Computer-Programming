#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {2,3,4,6,3};

    cout<<arr[2]<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    int arr2[5];

    cout<<"Enter index 0> ";
    cin>>arr2[0];

    cout<<"Enter index 1> ";
    cin>>arr2[1];

    cout<<"Enter index 2> ";
    cin>>arr2[2];

    cout<<"Enter index 3> ";
    cin>>arr2[3];

    cout<<"Enter index 4> ";
    cin>>arr2[4];

    cout<<arr2[0]<<endl;
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<endl;
    cout<<arr2[3]<<endl;
    cout<<arr2[4]<<endl;



    return 0;
}
