#include <iostream>
using namespace std;

int main ()
{
    int marks[2][5];

    for(int j=0; j<2; j++)
    {
        for(int i=0; i<5; i++)
        {
            cout<<"Enter Student "<<j+1<<"'s marks in subject "<<i+1<<"> ";
            cin>>marks[j][i];
            cout<<endl;
        }
    }

    cout<<"-------------------------------------------------"<<endl;
    cout<<"                   RESULT                        "<<endl;
    cout<<"-------------------------------------------------"<<endl;

    cout<<endl;

    cout<<"Subject -- Student 1 -- Student 2"<<endl;
    for( int i=0; i<5; i++)
    {
    cout<<i+1<<"          "<<marks[0][i]<<"            "<<marks[1][i]<<endl;
    }

    return 0;
}
