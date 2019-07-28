#include <iostream>
using namespace std;
int main ()
{
    int array[5] = {123,-2,0,45,123};
    int temp,i,j;

for(j=0;j<5;j++)
{
        for(i=0; i<5; i++)
        {
            if(array[i+1]<array[i])
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
            if(j==4)
            {
            cout<<array[i]<<" ";
            }
        }
}



    return 0;
}
