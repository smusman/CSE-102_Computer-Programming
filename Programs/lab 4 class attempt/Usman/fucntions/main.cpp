#include <iostream>

using namespace std;

int fact(int);

int main()
{
    int num,result=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    result=fact(num);
    cout<<"Factorial of "<<num<<"is equal to "<<result<<endl;

    return 0;
}

    int fact (int n)
    {
        int result=1;
        for(int i=1; i<=n;i++)
           {
            result*=i;
    }
        return result;
        }
