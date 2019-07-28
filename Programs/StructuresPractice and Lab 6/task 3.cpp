#include <iostream>

using namespace std;

struct student
{
    int reg;
    int sem;

};

int main()
{
    student s1,s2,s3,s4,s5;
    int x;
    cout<<"Enter Student 1 registration no.: ";
    cin>>s1.reg;
    cout<<"Enter Student 1 semester: ";
    cin>>s1.sem;

    cout<<"Enter Student 2 registration no.: ";
    cin>>s2.reg;
    cout<<"Enter Student 2 semester: ";
    cin>>s2.sem;

    cout<<"Enter Student 3 registration no.: ";
    cin>>s3.reg;
    cout<<"Enter Student 3 semester: ";
    cin>>s3.sem;

    cout<<"Data Stored"<<endl;

    cout<<"==========="<<endl;

    cout<<"Enter registration num to read record> ";
    cin>>x;

    if(x==s1.reg)
    {
        cout<<"Semester is "<<s1.sem;
    }

    if(x==s2.reg)
    {
        cout<<"Semester is "<<s2.sem;
    }

    if(x==s3.reg)
    {
        cout<<"Semester is "<<s3.sem;
    }
    else
    {
        cout<<"Invalid Reg.No."<<endl;
    }



    return 0;
}
