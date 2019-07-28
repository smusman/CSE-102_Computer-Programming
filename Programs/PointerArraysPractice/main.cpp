#include <iostream>

using namespace std;

int main()
{
    /*int arr[6];

    int *a=arr;

    for(int i=0;i<6;i++)
    {
        cin>>*(a+i);
        cout<<*(a+i)<<endl;


    }

    int b[2][5];
    cout<<b[0][4];

    */

    char *arr[4];

    char name1[10]={"Salman"};
    char name2[10]={"Talha"};
    char name3[10]={"Ali"};
    char name4[10]={"Usman"};
    char name5[10]={"Aashir"};
    char name6[10]={"Asif"};


    arr[0]=name1;
    arr[1]=name2;
    arr[2]=name3;
    arr[3]=name4;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;


    return 0;
}
