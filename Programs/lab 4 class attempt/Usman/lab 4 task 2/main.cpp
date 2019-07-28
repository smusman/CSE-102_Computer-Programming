#include <iostream>

using namespace std;

int main()
{
    int h,w, j, i;

    cout<<"Please enter height> ";
    cin>>h;

    cout<<"Please enter width> ";
    cin>>w;

    for(j=1;j<=h;j++)
    {
        for (i=1;i<=w;i++)
        {
            if (j%2==0)
            {cout<<" *";}
            else
            {cout<<"* ";}
        }

    cout<<endl;
    }




    return 0;
}
