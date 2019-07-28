#include<iostream>
using namespace std;
int main()
{
    char temp,j;
    char a[100],b[100],c[100],d[100],e[100];
    cin.getline(a,100);
    cin.getline(b,100);
    cin.getline(c,100);
    cin.getline(d,100);
    cin.getline(e,100);
    for(j=0;j<10;j++)
    {
        if(a[0]!=b[0])
        {
    if(a[0]>b[0])
    {
         for(int i=0;i<100;i++)
         {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
         }
    }
        }
        else
        {
            if(a[1]>b[1])
            {
        for(int i=0;i<100;i++)
         {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
         }

            }

        }
         if(b[0]!=c[0])
        {
         if(b[0]>c[0])
    {
         for(int i=0;i<50;i++)
         {
        temp=b[i];
        b[i]=c[i];
        c[i]=temp;
         }
    }
        }
      else
        {
            if(b[1]>c[1])
            {
                  for(int i=0;i<50;i++)
         {
        temp=b[i];
        b[i]=c[i];
        c[i]=temp;


            }
        }
        }
         if(c[0]!=d[0])
        {
         if(c[0]>d[0])
    {
         for(int i=0;i<50;i++)
         {
        temp=c[i];
        c[i]=d[i];
        d[i]=temp;
         }
    }
        }
        else
        {
        if(b[1]>c[1])
            {
            for(int i=0;i<50;i++)
         {
            temp=c[i];
        c[i]=d[i];
        d[i]=temp;

            }
        }
        }
         if(d[0]!=e[0])
        {
         if(d[0]>e[0])
    {
         for(int i=0;i<50;i++)
         {
        temp=d[i];
        d[i]=e[i];
        e[i]=temp;
         }
    }
        }
        else
        {
        if(b[1]>c[1])
            {
            for(int i=0;i<50;i++)
         {
      temp=d[i];
        d[i]=e[i];
        e[i]=temp;

            }
        }
        }
}
for(int i=0;a[i]!='\0';i++)
{
    cout<<a[i];
}
cout<<endl;
for(int i=0;b[i]!='\0';i++)
{
    cout<<b[i];
}
cout<<endl;
for(int i=0;c[i]!='\0';i++)
{
    cout<<c[i];
}
cout<<endl;
for(int i=0;d[i]!='\0';i++)
{
    cout<<d[i];
}
cout<<endl;
for(int i=0;e[i]!='\0';i++)
{
    cout<<e[i];
}
cout<<endl;
}
