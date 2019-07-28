#include <iostream>

using namespace std;

int main()
{
    /*Writing First Program

    cout << "Hello world!" << endl;


    cout << "Name:\tSyed Muhammad Usman\n";

    cout << "Reg No:\t16PWCSE1444";


    int x=5, y=2;
    cout << x+y;

    float x, y;
    cout << "Enter 2 numbers\n" ;
    cin >> x>>y;

    //sum
    cout << x+y<<"\t";
    //minus
    cout << x-y<<"\t";
    //multiply
    cout << x*y<<"\t";
    //divide
    cout << x/y<<"\t";


    int l, w;
    cout << "Enter length and width\n";
    cin >> l>>w;

    cout<< "Perimeter is equal to\n"<<2*l+2*w<<"\n";
    cout<< "Area is equal to\n"<<l*w;


    int i, j;

    i=2+3*4-5;

    cout << i<<"\n";

    i=(2+3)*4-5;

    cout << i<<"\n";

    i=2+3*(4-5);

    cout << i<<"\n";

    i=2+(3*4)-5;

    cout << i<<"\n";

    j=2+3-5*6+7/3+100;

    cout << j<<"\n";

    j=2+(3-5)*(6+7/3)+100;

    cout << j<<"\n";

    j=7+4*(9/(9-3*2)+(7*(9-2*(8+1))));

    cout << j<<"\n";


    int i;

    i=5%2;

    cout << i<<"\n";

    i=57%3;

    cout << i<<"\n";

    i=100%10;

    cout << i<<"\n";



    int i;
    cout << "Enter Number\n";
    cin >> i;
    cout <<i%10;


    int i, j, k, l;
    float m;

    cin>>i;

    j=i/3600;

    cout<<j<<"Hours"<<endl;

    k=j*3600;

    l=i-k;

   m=l/3600;

    cout<<m*60<<"min"<<endl;


    int a,b;
    cout<<"enter num1\n";
    cin>>a;

    cout<<"enter num2\n";
    cin>>b;

    if(a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else if(a<b)
    {
        cout<<b<<" is greater than "<<a;
    }
    else cout<<"both are equal";

*/


    int a,b;
    char ch;

    cout<<"Enter num1\n";
    cin>>a;

    cout<<"enter num2\n";
    cin>>b;

    cout<<"enter + or -\n";
    cin>>ch;

    if(ch=='+')
    {
        cout<<a+b;
    }
    else if(ch=='-')
    {
        cout<<a-b;
    }
    else cout<<"invalid syntax";


    return 0;
}
