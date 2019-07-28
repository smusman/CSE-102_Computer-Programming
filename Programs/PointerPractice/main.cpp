#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int y=100;
    int *p; //or *p=&x;
    p=&x;

    cout<<"Address of x = "<<p<<endl;
    cout<<"Value of x = "<<*p;



    return 0;
}
