#include <iostream>

using namespace std;

int main()
{

    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5 || i==8)
        {
            continue;
        }
            cout<<i<<endl;
    }

    return 0;
}
