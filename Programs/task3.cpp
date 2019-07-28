#include<iostream>
#include<malloc.h>
#include<string.h>
char *subs(char arr[50],int a,int b,int stop);
using namespace std;
int main()
{
    int st,en,k=0,f;
    char *string_new;
    cout<<"Enter the total length of string : ";
    cin>>f;
    char str[f];
    cout<<"Enter the string : ";
    cin.ignore();
    cin.getline(str,f);
    for(int p=0;str[p]!='\0';p++)
    {
        k++;
    }
    cout<<"Enter the start point : ";
    cin>>st;
    cout<<"Enter the ending point : ";
    cin>>en;
   string_new=subs(str,st,en,f);
   if(string_new==NULL)
   {
       cout<<"The string is less than the stoping value entered";
   }
       cout<<(string_new);

return 0;
}
char *subs(char arr[],int a,int b,int stop)
{
    char *p;
    if(stop<b)
    {
        return p=NULL;
    }
    p=&arr[a-1];
    arr[b]='\0';
    return p;

}
