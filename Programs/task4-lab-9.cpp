#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[100];
    int f=0;
    bool res=false;
    char s2[100];
    cout<<"Enter string: ";
    cin.getline(s1,100);
    cout<<"Enter sub string : ";
    cin.getline(s2,100);
    for(int e=0;s1[e]!='\0';e++)
    {
        res=false;
        if(s1[e]==s2[0])
        {
            for(int t=1;s2[t]!='\0';t++)
            {
                if(s1[e+t]==s2[t])
                {
                    res=true;
                }
                else
                {
                    res=false;
                    break;

                }
            }
        }
        if(res==true)
        {
            f++;
        }
    }
    cout<<"Number of times substring displayed is : "<<f;

}
