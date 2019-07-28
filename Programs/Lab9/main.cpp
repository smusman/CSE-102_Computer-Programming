#include <iostream>

using namespace std;

int main()
{
    int num,count=0,temp,temp1,temp2;

    string a[]={"one","two","three","four","five","six","seven","eight","nine"};
    string b[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string c[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    string d[]={"hundred", "thousand", "hundred thousand"};

    cout<<"Enter Number> ";
    cin>>num;

    temp=num;

    while(temp!=0) //loop for counter
    {
        temp=temp/10;
        count++;
    }

    temp1=num;

    while(temp1!=1) //loop for first digit
    {
        temp1=temp1/10;

    }

    temp2=num;

    while(temp2!=2) //loop for second digit
    {
        temp1=temp1/10;

    }


    cout<<"counter "<<count<<endl;

    cout<<a[temp1-1]<<" "; //this is to display name of first digit

    cout<<a[temp2-1]<<" ";

    cout<<d[count-3]<<" "; //this is to display the power of last digit


    return 0;
}
