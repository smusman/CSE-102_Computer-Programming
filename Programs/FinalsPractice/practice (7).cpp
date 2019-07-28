#include <iostream>
#include <malloc.h>
using namespace std;


int main ()
{
    int *p;

    p=(int*)malloc(sizeof(int));

    if(p=NULL)
    {
        cout<<"Faied to allocate memory";
    }
    else{

        *p=20;
        cout<<*p;
    }

    return 0;
}
