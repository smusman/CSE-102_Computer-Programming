#include <iostream>

using namespace std;

int main()
{
    string password="123abc";
    loop: cout<<"Enter Password> "<<flush;

    string value;
    cin>>value;

    if (password== value)
        {
            cout<<"Correct password"<<endl;
        }
    if (password!= value)
    {
        cout<<"Invalid Password"<<endl;
    }
    goto loop;
    return 0;
}
