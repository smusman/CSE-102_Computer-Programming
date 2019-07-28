#include <iostream>
using namespace std;


int main ()
{
    int salary[5];
    int i;
    float sum=0;


    for(i=0;i<5;++i)
    {
        cout<<"Enter Salary: ";
        cin>>*(salary+i);
        sum=sum+*(salary+i);
    }

    for(i=0;i<5;++i)
    {

        cout<<*(salary+i)<<endl;
    }

    cout<<"Average is "<<sum/5<<endl;

    return 0;
}
