#include <iostream>
using namespace std;

int main ()
{
    char LongString[100];
    int counter=0;
    int words=1;

    cout<<"Enter String> ";
    cin.getline(LongString,100);

    for(int i=0 ; LongString[i]!='\0' ; i++)
    {
        counter++;
        if(LongString[i]==' ')
        {
            counter--;
        }


    }

    for(int i=0 ; LongString[i]!='\0' ; i++)
    {
        if(LongString[i]==' ')
        {
            words++;
        }


    }

    cout<<"No. of Characters: "<<counter<<endl;
    cout<<"No. of Words:"<<words;




    return 0;
}
