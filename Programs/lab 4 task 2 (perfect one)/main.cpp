#include <iostream>

using namespace std;
//h=height input by user
//w=width input by user
//col=specific col
//row=specific row


int main()
{
    int h,w,col,row,newW;
    cout<<"Enter Height> ";
    cin>>h;
    cout<<"Enter width> ";
    cin>>w;

    newW=w*2;
    for(row=1; row<=h; row++)
    {
        for(col=1; col<=newW; col++)
        {
            if(row%2==0)
            {
                if(col%2==0)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(col%2==0)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"*";
                }
            }

        }
        cout<<endl;
    }



    return 0;
}
