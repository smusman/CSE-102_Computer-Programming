#include <iostream>
using namespace std;

int main ()
{
    char str[100];
    char substr[50];

    cin.getline(str,100);
    cout<<str;

    cin.getline(substr,50);
    cout<<substr;

    for(int i=0; str[i]!='\0';i++)
    {
        if(substr[0]==str[i])
        {

        }
    }


    return 0;
}
