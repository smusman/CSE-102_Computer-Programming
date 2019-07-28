#include <iostream>

using namespace std;

int main()
{
    int salary[5];
    int *p,i;
    p=salary;

    for (i=0;i<5;++i)
    {
        cout<<"Enter Salary >" ;
        cin>>*(p+i);

    }

    for(i=0;i<5;++i)
    {
        cout<<"Salary = "<<*(p+i)<<endl;
    }
    return 0;
}
