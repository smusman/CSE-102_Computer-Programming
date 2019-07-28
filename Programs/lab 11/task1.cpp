#include <iostream>
using namespace std;
int sort(int []);


int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    sort(arr);

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }



    return 0;
}

int sort(int arr[])
{
    int temp;
    for (int j=0;j<10;j++)
    {
    for(int i=0;i<9;i++)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }

    return *arr;

}
