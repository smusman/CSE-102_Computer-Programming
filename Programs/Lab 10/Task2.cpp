#include <iostream>

using namespace std;
int main ()
{
    int num,sum=0,avg=0;

    cout<<"Enter Number of Employees> ";
    cin>>num;

    int s[num];
    int *p;
    p=s;

    for(int i=0;i<num;i++)
    {
        cout<<"Enter salary> ";
        cin>>*(p+i);

    }

    for(int j=0;j<num;j++)
    {
        sum=sum+*(p+j);
    }

    avg=sum/num;

    cout<<"Average salary is "<<avg;



    return 0;
}
