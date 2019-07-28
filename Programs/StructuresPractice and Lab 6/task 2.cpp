#include <iostream>

using namespace std;
struct point
{
    int x;
    int y;
};



int main()
{
    point cord, rec;
    int i,j,w,h;

    cout<<"Enter the x coordinate: ";
    cin>>cord.x;

    cout<<"Enter the y coordinate: ";
    cin>>cord.y;

    cout<<"Enter the width of rectangle: ";
    cin>>rec.x;

    cout<<"Enter the Height of rectangle: ";
    cin>>rec.y;

    for(i=1; i<=cord.y; i++)
    {
        cout<<endl;
    }
    for(j=1; j<=cord.x; j++)
    {
        cout<<" ";

    }
    for(h=1; h<=rec.y; h++)
    {


        for(w=1; w<=rec.x; w++)
        {
            cout<<"*";
        }
        cout<<endl;
        for(j=1; j<=cord.x; j++)
        {


        cout<<" ";

        }
    }

    return 0;
}
