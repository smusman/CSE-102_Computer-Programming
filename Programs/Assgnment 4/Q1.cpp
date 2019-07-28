#include <iostream>

using namespace std;

int main()
{
    int a[10][10]; //first matrix
    int b[10][10]; //second matrix
    int c[10][10]; //product matrix
    int i,j,r1,r2,c1,c2,k;

    //columns of first = rows in second
l:
    cout<<"Enter Rows of First> ";
    cin>>r1;
    cout<<"Enter Columns of First> ";
    cin>>c1;
    cout<<"Enter Rows of Second> ";
    cin>>r2;
    cout<<"Enter Columns of Second> ";
    cin>>c2;

    if(c1 != r2)
    {
        cout<<"'Columns of first Must be equal to Rows in second'"<<endl;
        goto l;
    }

    cout<<endl<<"Matrix 1: "<<endl;
    for(i=0; i<r1; ++i) //for storing values of first matrix
    {
        for(j=0; j<c1; ++j)
        {
            cout<<"Enter a"<<i+1<<j+1<<"> ";
            cin>>a[i][j];
        }
    }


    cout<<endl<<"Matrix 2: "<<endl;
    for(i=0; i<r2; ++i) //for storing values of second matrix
    {
        for(j=0; j<c2; ++j)
        {
            cout<<"Enter b"<<i+1<<j+1<<"> ";
            cin>>b[i][j];
        }
    }



    for(i = 0; i < r1; ++i) //loop for multiplying matrix
    {
        for(j = 0; j < c2; ++j)
        {
                c[i][j]=0; //this is to initialize matrix
            for(k = 0; k < c1; ++k)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    cout << endl << "Product Matrix is: " << endl; //loop for displaying matrix
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
        {
            cout << " " << c[i][j];
            if(j == c2-1)
                cout << endl;
        }
    }



    return 0;
}
