#include <iostream>
using namespace std;

char *subs(char s,int x,int y);

int main ()
{
    char a[] = {"this is a string la la la la "};
    int i=5,j=15;
    char *p;

    p=char*subs(a, i, j);

    cout<<p;


    return 0;
}

char *subs(char s,int x,int y)
{
    char *p=&s[x-1];
    s[y]='\0';
    return p;
}
