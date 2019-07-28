#include <iostream>

using namespace std;

void d(int *arr);

int main()
{
    int arr[10] = {1,2,3,4,5,30,7,8,9,10};

    d(arr);
    for(int a=0;a<10;a++)
    {

        cout<<*(arr+a)<<endl;
    }

    return 0;
}

void d(int *arr)
{
    int *a=arr;
    int temp;
    int j,i;
    for(int j=0; j<10; j++)
    {
        for(int i=0; i<9; i++)
        {

            if (*(a+i)<*(a+(i+1)))
            {
            temp=*(a+i);
            *(a+i)=*(a+(i+1));
            *(a+(i+1))=temp;
            }

        }
    }


}
