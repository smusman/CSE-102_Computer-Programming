#include <iostream>

using namespace std;
int hcf(int a, int b);

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    cout<<hcf(a,b);

    return 0;
}

int hcf(int a, int b)
{
    int i;
    for(i=a;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}
