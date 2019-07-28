#include <iostream>
#include <malloc.h>
using namespace std;


int main ()
{
    int *p,n,x;
    cout<<"Enter Sizeof array: ";

    cin>>n;

    p=(int*)malloc(sizeof(int)*n);

    cout<<"Enter Sizeof array: ";

    cin>>x;

    p=(int*)realloc(p,sizeof(int)*x);

    for(int i=0; i<x;i++)
    {
        cout<<"Enter "<<i+1<<"value of array> ";
        cin>>*(p+i);
    }

    for(int i=0; i<x;i++)
    {
        cout<<"Value "<<i+1<<" = "<<*(p+i)<<endl;
    }

    return 0;
}
