#include <iostream>
using  namespace std;

int main()
{
    int n;

    cout<<"Enter the number of employees:";
    cin>>n;

    float salary[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Salary of employee "<<i+1<<"> ";
        cin>>*(salary+i);
    }

    float avg=0;

    for(int i=0;i<n;i++)
    {
        avg=avg+*(salary+i);
    }

    cout<<"Average Salary is: "<<avg/n;



    return 0;
}
