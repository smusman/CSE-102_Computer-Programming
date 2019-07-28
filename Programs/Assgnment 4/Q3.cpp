#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4]= {{4,3,2,1},{4,3,2,1},{4,3,2,1},{4,3,2,1}};
    int i,j,temp,k,n;

    cout<<"Matrix before sorting: "<<endl;
    cout<<endl;

    for(i=0; i<4; i++) //loop for displaying unsorted matrix
    {
        for(j=0; j<4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matrix after sorting: "<<endl;

    for(i=0; i<4; i++) //loop for sorting
    {
        for(j=0; j<4; j++)
        {
            for(k =(j + 1); k < 4; k++)
            {
                if(matrix[i][j]>matrix[i][k])
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[i][k];
                    matrix[i][k]=temp;
                }
            }
        }
    }

    for(i=0; i<4; i++) //loop for displaying matrix
    {
        for(j=0; j<4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
