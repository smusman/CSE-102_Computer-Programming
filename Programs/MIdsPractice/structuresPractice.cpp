#include <iostream>
using namespace std;

struct phone
    {
        int area;
        int exchange;
        int num;

    };

int main()
{
    phone p1,p2;

    cout<<"Enter your Area Code, Exchange and Number> ";
    cin>>p1.area>>p1.exchange>>p1.num;

    p2.area=91;
    p2.exchange=767;
    p2.num=8900;

    cout<<"My Number is: 0"<<p2.area<<" "<<p2.exchange<<" "<<p2.num<<endl;
    cout<<"Your Number is: "<<p1.area<<" "<<p1.exchange<<" "<<p1.num<<endl;


    return 0;
}
