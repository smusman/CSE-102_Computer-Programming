#include <iostream>
using namespace std;

int main()
{
    int i=2,num;

    cout<<"Enter Number to find its factors> ";
    cin>>num;

    while(i<num)
    {
        if(num%i==0)
        {
            cout<<" "<<i;
        }

        i++;
    }

    return 0;
}
