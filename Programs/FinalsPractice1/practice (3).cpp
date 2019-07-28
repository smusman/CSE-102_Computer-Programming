#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main ()
{
    string str;

    cout<<"Enter Array> ";

    getline(cin,str);

    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    if(str.empty())
    {
        cout<<"string is empty";
    }
    else{

        cout<<(str.size())<<endl;
    }

    if(strcmp("alo","this"));
    {
        cout<<"Function works"<<endl;
    }


    return 0;
}
