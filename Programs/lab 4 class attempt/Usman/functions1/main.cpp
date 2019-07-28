#include <iostream>

using namespace std;

int add();

int x,y;
int main()
{

    cout<<"enter x"<<endl;
    cin>> x;
    cout<<"enter y"<<endl;
    cin>> y;

    add();

    return 0;
}

int add()
{   int res;
    res=x+y;
    cout<<"Result is: "<<res<<endl;
}
