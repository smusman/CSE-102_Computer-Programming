#include <iostream>

using namespace std;

struct complex {

    float real;
    float img;

};

complex sum(complex c1, complex c2);
complex sub(complex c1, complex c2);
complex multiply(complex c1, complex c2);
complex divide(complex c1, complex c2);

int main()
{
    complex c1,c2,sum1,sub1,mul,div;

    cout<<"Enter Real part of First> ";
    cin>>c1.real;

    cout<<"Enter Imaginary part of First> ";
    cin>>c1.img;


    cout<<"Enter Real part of Second> ";
    cin>>c2.real;

    cout<<"Enter Imaginary part of Second> ";
    cin>>c2.img;


    sum1=sum(c1,c2);

    cout<<"SUM = "<<sum1.real<<" + ("<<sum1.img<<")i"<<endl;

    sub1=sub(c1,c2);

    cout<<"SUB = "<<sub1.real<<" + ("<<sub1.img<<")i"<<endl;

    mul=multiply(c1,c2);

    cout<<"Multiplication = "<<mul.real<<" + ("<<mul.img<<")i"<<endl;

    div=divide(c1, c2);

    cout<<"Divide = "<<div.real<<" + ("<<mul.img<<")i"<<endl;


    return 0;
}

complex sum(complex c1, complex c2) //Addition
{
    complex result;

    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;

    return result;
}

complex sub(complex c1, complex c2) //Subtraction
{
    complex result;

    result.real=c1.real-c2.real;
    result.img=c1.img-c2.img;

    return result;
}

complex multiply(complex c1, complex c2) //Multiplication
{
    complex result;

    result.real=(c1.real*c2.real)+(c1.img*c2.img)*(-1);
    result.img=(c1.real*c2.img)+(c1.img*c2.real);

    return result;

}

complex divide(complex c1, complex c2) //Divide
{
    complex result;
    float x;

    x =(c2.real*c2.real)+(c2.img*c2.img);

    result.real=((c1.real*c2.real) + (c1.img*c2.img))/x;
    result.img=((c1.img*c2.real)+(c1.real*c2.img))/x;


    return result;
}

