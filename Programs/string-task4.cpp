#include<iostream>
using namespace std;
int main()
{
    char  a[100],b[100];
    int p;
    cin.getline(a,100);
    for(p=0;p<100;p++)
    {
        if(a[p]=='\0')
        {
            cout<<endl<<"Number of character : "<<p;
            break;

        }
        cout<<a[p];
    }
}
