#include <iostream>
using namespace std;

int main ()
{

    int arr[3]={1,2,3};

    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<" ";
    }

    return 0;
}
