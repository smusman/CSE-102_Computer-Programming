#include <iostream>

using namespace std;

int main()
{
    char input;
    cin>>input;

    switch(input)
    {
        case 'A':{cout<<"Excellent"<<endl; break; }
        case 'B':{cout<<"Very good"<<endl; break;}
        case 'C':{cout<<"Good"<<endl; break;}
        case 'D':{cout<<"Avg"<<endl; break;}
        default : {cout<<"Invalid Entry"<<endl;}
    }


    return 0;
}
