#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char str[100],vowel[5]={'a','e','i','o','u'};
    int count=0,j,i;
    cout<<"Write a sentence: ";
    cin.getline(str,100);

    for(j=0;str[j]!='\0';j++)
    {
        for(i=0;i<5;i++)
        {

            if(str[j]==vowel[i])
            {
                count++;
            }
        }

    }

    cout<<"Total numbers of vowels= "<<count;


    return 0;
}
