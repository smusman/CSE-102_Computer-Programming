#include <iostream>

using namespace std;

int addition(int a, int b, int c);

int main()
{
    int result,a,b,c;
    cin>>a>>b>>c;

    result= addition(a,b,c);
    cout<<result;
    return 0;
}

int addition(int a, int b, int c){

   int answer=a+b+c;
    return answer;

}
