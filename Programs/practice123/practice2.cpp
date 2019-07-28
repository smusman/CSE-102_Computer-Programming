#include <iostream>
using namespace std;
int main ()
{

    int i,sum=0;

    int arr[5];

    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"Sum = "<<sum<<endl;

    return 0;
}
