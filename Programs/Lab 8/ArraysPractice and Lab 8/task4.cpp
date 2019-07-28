#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char str[100],subs[50];
    int c=0,b=1;
    cout<<"Write a string: ";
    cin.getline(str,100);
    cout<<"Write a substring: ";
    cin.getline(subs,50); //subs is a keyword
    for(int i=0; i<100; i++)
    {
        if(subs[0]==str[i])
        {
            for(int j=0; subs[j]!='\0'; j++)
            {
                if(subs[j]!=str[i+j])
                {
                    b=0;
                    break;
                }
            }
            if(b!=0)
            {
                c++;
            }
            b=1;
        }


    }
    cout<<c;
}
