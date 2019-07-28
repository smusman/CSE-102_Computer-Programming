#include <iostream>
using namespace std;
int main ()
{
    char LStr[100],str[50];
    cout<<"Enter Larger String: ";
    cin.getline(LStr,100);

    cout<<"Enter Small String: ";
    cin.getline(str,50);

    for(i=0; LStr[i]!='\0';i++)
    {
        if(LStr[i]==str[0])
        {
            for(j=1;str[j]!='\0';j++)
            {
                if(str[j]==LStr[i+j])
                {

                }
            }
        }
    }



    return 0;
}

this is a string
this
