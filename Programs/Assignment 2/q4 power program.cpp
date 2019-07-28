#include <iostream>
using namespace std;
int power(int,int);
int main()
{
    int b,p,result;

    cout<<"Enter Base"<<endl;
    cin>>b;
    cout<<"Enter Power"<<endl;
    cin>>p;

    result=power(b,p);
    cout<<result;

    return 0;
}

int power(int b,int p)
{
    int i,j;

    j=b;

    for(i=1;i<p;i++)
    {
        b=b*j;
    }
    return b;
}
