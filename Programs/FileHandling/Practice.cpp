#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream myFile ("list.txt");
    cout<<"Enter First, Last Name and Age:"<<endl;
    cout<<"Press ctrl+z to stop input in file"<<endl;
    cout<<endl;

    string first,last;
    int age;

    while(cin>>first>>last>>age)
    {
        myFile<<first<<" "<<last<<" "<<age<<endl;

    }

    ifstream file("list.txt");

    int age1;
    string first1,last1;

    while(file.good())
    {
        file>>first1>>last1>>age1;
        cout<<first<<" "<<last<<" "<<age<<endl;
    }

    return 0;
}
