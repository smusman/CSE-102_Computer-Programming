#include <iostream>

using namespace std;

struct complex {

    float real;
    float img;

};

complex sum(complex c1, complex c2);

int main()
{
    complex c1,c2,res;

    cout<<"Enter 1st> ";
    cin>>c1.real>>c1.img;

    cout<<"Enter 2nd> ";
    cin>>c2.real>>c2.img;

    res=sum(c1,c2);

    cout<<res.real<<" + "<<res.img<<"i"<<endl;




    return 0;
}

complex sum(complex c1, complex c2)
{
    complex result;

    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;

    return result;
}
