#include <iostream>
using namespace std;
int main ()
{
    char str[100];
    int count=0,i,word=1;

    cout<<"Enter a long string> ";
	cin.getline(str,100);

    for(i=0; str[i]!='\0';i++)
    {
        count++;

        if(str[i]==' ')
        {
            word++;
        }
    }

    cout<<"Characters "<<count<<endl;
    cout<<"Words "<<word<<endl;

    return 0;
}
