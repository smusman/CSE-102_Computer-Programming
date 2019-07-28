#include <iostream>

using namespace std;

int main()
{
int i,j,h,w,k;
cout<<"Enter Height"<<endl;
cin>>h;
cout<<"Enter width"<<endl;
cin>>w;

for(i=0;i<h;i++)
{
    if(i%2==0)
    {
        for(j=0;j<w;j++)
        {
            cout<<"* ";
        }
    }
    else
    {
        for(j=1;j<w;j++)
        {
            cout<<" *";
        }
    }
    cout<<endl;
}




 return 0;
}
