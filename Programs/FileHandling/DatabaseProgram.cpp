#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream database("database.txt",ios::trunc);
    string first, last;
    int age,n ;

    cout<<"This Program will store a database First,Last and age"<<endl;
    cout<<endl;

    cout<<"Enter Number of ppl"<<endl;
    cin>>n;

    for(int i=1 ;i<=n;i++)                  //Makes database of 5 ppl in permanent file database.txt
    {   cout<<"Enter first name "<<i<<"> ";
        cin>>first;
        cout<<"Enter last name "<<i<<"> ";
        cin>>last;
        cout<<"Enter age "<<i<<"> ";
        cin>>age;
        database<<first<<" "<<last<<" "<<age<<endl;
    }


    ifstream myFile("database.txt");

    while(!myFile.eof())                  //Makes database of 5 ppl in permanent file database.txt
    {
        myFile>>first>>last>>age;
        cout<<first<<" "<<last<<" "<<age<<endl;
    }

    database.seekg(0);




    return 0;
}
