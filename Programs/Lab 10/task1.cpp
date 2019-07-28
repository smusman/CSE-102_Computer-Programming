#include <iostream>
using namespace std;
int main ()
{
    int salary[5];
    int i;

    for(i=0;i<5;i++)
    {
        cout<<"Enter Salary: ";
        cin>>*(salary+i);
    }

     for(i=0;i<5;i++)
    {

        cout<<*(salary+i)<<endl;
    }



    return 0;
}
