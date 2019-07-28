#include <iostream>

using namespace std;

int x,y;

int addNum(int x,int y);

int main()
{   cout<<"enter 2 nums for addition"<<endl;
    cin>>x;
    cin>>y;
    addNum(x,y);

    return 0;
}

int addNum(int x,int y)
{
   int answer=x+y;
   cout<<"Answer is "<< answer;
    return answer;
}
