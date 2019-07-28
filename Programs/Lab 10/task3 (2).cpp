#include <iostream>
using namespace std;
void display(char arr[], int start, int stop);

int main ()
{
    char arr[100];
    int a,b;

    cout<<"Enter string> ";
    cin.getline(arr,100);

    cout<<"Enter integer a>";
    cin>>a;

    cout<<"Enter integer b>";
    cin>>b;

    display(arr,a,b);

    return 0;
}

void display(char arr[], int start, int stop)
{

    for(int i=start;i<stop-1;i++)
    {
        cout<<arr[i];
    }



}
