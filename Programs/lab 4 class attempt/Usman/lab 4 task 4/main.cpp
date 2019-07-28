#include <iostream>

using namespace std;

int main()
{
    int i,num,b;

    cout<<"Please enter number> ";
    cin>>num;
    cout<<"Pleaser enter base from 2 to 9> ";
    cin>>b;

    while (num<=b);
    {
        num=num/b;
        cout<<num%b;
        i++;
    }


    return 0;
}
