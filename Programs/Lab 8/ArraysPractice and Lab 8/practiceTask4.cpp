#include <iostream>
#include <string>
using namespace std;
int main ()
{
    char string[100];
    char substring[50];
    int count=0, b;

    cout<<"Enter String> ";
    cin.getline(string, 100);
    cout<<"Enter SubString> ";
    cin.getline(substring, 50);

    for(int i=0;i<100;i++)
    {
        if(substring[0]==string[i])
        {
            for(int j=0; substring[j]!='\0'; j++)
            {
                if(substring[j]!=string[i+j])
                {
                    b=0;
                    break;
                }


            }
            if(b!=0)
                {
                    count++;

                }
                b=1;

        }

    }
    cout<<count;

    return 0;
}
