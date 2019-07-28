#include <iostream>
using namespace std;
int main ()
{
    int num,i,j,k,check;

    string a[]= {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string b[]= {"Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};


    l: cout<<"Enter Number> ";
    cin>>num;

    check=num; //to check zero

    if(num<0)
    {
        cout<<"Minus ";
        num=(num*-1);
    }

    if(num>=1000)
    {
        i=num%1000; //i is used to find k

        k=(num-i)/1000; //k is the first digit

        cout<<a[k-1]<<" Thousand ";
        if(check>(k*1000) && check<(k*1100))
        {
            cout<<" and ";
        }
        num=num-(k*1000); //thousand digit is removed from num here

    }

    if(num>=100)
    {
        i=num%100;
        k=(num-i)/100; //k is the first digit
        cout<<a[k-1]<<" Hundred";
        if(i!=0)
        {
            cout<<" and ";
        }
        num=num-(k*100);
    }


    if(num>=1 && num<20)
    {
        cout<<a[num-1];
    }


    if(num>19 && num<=99)
    {
        i=num%10;
        k=(num-i)/10;

        cout<<b[k-1]<<" ";
        if(i!=0)
        {cout<<a[i-1];}
    }


    if(check>0)
    {
        cout<<" Only";
    }
    if (check==0)
    {
        cout<<"Zero";
    }

    cout<<endl;
    goto l;

    return 0;
}

//there are problems in this code test for every possible value and find solution to it
