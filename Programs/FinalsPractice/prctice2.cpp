#include <iostream>
using namespace std;
int main ()
{
    int a=6,b=9;
    int j=1,i=1;
    while(true)
    {
        a=a*j; //9,18
        b=6;
        j++; //2,3
        i=1;
        while(b<=a)
        {
            b=b*i; //6,12
            if(a==b)
            {
                cout<<a;
                break;
            }
            i++;
        }
    }


    return 0;
}

//first determine the small entry.
//two loops, inner loop for table of 6, second loop for table of 9
