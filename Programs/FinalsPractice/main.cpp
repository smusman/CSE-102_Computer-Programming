#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m;
    cout << "Please enter a number> ";
    cin>>i;

    j=i/3600;

    cout<<"Hours: "<<j<<endl;

    k=i-(j*3600);
    l=k/60;

    cout<<"Mins: "<<l<<endl;

    m=k-(l*60);

    cout<<"Seconds:"<<m<<endl;



    return 0;
}



