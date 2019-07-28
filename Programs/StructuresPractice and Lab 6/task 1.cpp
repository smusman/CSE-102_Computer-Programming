#include <iostream>

using namespace std;

struct phone {

    int area;
    int exchange;
    int num;
};



int main()
{
    phone p1,p2;

    cout<<"Enter you Area code, exchange, and number: ";
    cin>>p2.area>>p2.exchange>>p2.num;

    p1.area=042;
    p1.exchange=867;
    p1.num=4982;

    cout<<"My number is (0"<<p1.area<<") "<<p1.exchange<<"-"<<p1.num<<endl;

    cout<<"Your number is (0"<<p2.area<<") "<<p2.exchange<<"-"<<p2.num<<endl;




    return 0;
}

