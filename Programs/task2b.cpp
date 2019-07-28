#include<iostream>
#include<malloc.h>
int* generat();
int* resiz(int *point,int &n);
using namespace std;
int main()
{
    int *a,*c,n;
    a=generat();
    c=resiz(a,n);
    for(int b=0;b<n;b++)
    {
        cout<<"New value of "<<b+1<<" : ";
      cout<<*(c+b)<<endl;
    }
}
int* generat()
{
    int *arr=(int *)malloc(sizeof(int)*10);
    for(int a=0;a<10;a++)
    {
        cout<<"Enter the value of "<<a+1<<" : ";
        cin>>*(arr+a);
    }
    return arr;
}
int* resiz(int *point,int &n)
{
    cout<<"Enter the new resize value : ";
    cin>>n;
    point=(int *)realloc(point,sizeof(int)*n);
    return point;
}
