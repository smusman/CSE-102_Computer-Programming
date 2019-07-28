#include <iostream>
using namespace std;
int fibonacci(int terms);
int a=1,b=1;

int main()
{
    int terms;

    cout<<"Enter Num of terms> ";
    cin>>terms;
    cout<<b;

    fibonacci(terms);


    return 0;
}

int fibonacci(int terms)
{   cout<<b;
    int i;
    if(i==terms)
    {
        return;
    }

    i++;

    c=a+b;
    a=b;
    b=c;

    fibonacci();

}

