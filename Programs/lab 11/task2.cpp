#include<iostream>
#include <malloc.h>

int* generateArray();

using namespace std;

int main ()
{
    int *a;
    a=generateArray();

    cout<<"Stored in heap:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<endl;
    }


    return 0;
}

int* generateArray()
{
    int *arr;

    arr=(int* )malloc(sizeof(int)*5);

    for(int i=0;i<5;i++)
    {
        cout<<"Enter element "<<i+1<<"> ";
        cin>>*(arr+i);
    }
    return arr;
}


