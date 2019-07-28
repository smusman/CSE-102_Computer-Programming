#include <iostream>

using namespace std;

int main()
{
    int i, j, k, l, m;

    cout<<"THIS IS A PROGRAM TO CONVERT TIME GIVEN IN SECONDS, INTO HOURS, MINS AND SECS\n";

    loop: cout<<"Enter time in SECONDS\n";

    cin>>i;

    j=i/3600;

    cout<<j<<"\tHOURS\n";

    k=i/60;

    l=k-(j*60);

    cout<<l<<"\tMINS\n";

    m=i-(l*60)-(j*3600);

    cout<<m<<"\tSECS\n";

    goto loop;


    return 0;
}
