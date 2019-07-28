#include <iostream>

using namespace std;
int fact(int);

int main()
{
    int num, i=1,factorial;

    cout<<"Program to find factorial of a number"<<endl;
    cout<<"Enter number> "<<flush;
    cin>>num;
    factorial=fact(num);
    cout << "Factorial is: " << factorial<< endl;

    return 0;
}
int fact(int x)
{
    int i,f=1;

    for (i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;


}
