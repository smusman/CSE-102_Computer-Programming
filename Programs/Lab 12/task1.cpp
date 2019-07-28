#include <iostream>
#include <fstream>


using namespace std;

int main ()
{

    ifstream infile;

    infile.open("testfile.txt");
    if(infile.is_open())
    {
        string str;
        cout<<"reading from file..."<<endl;
    while(infile.good()){
       getline(infile,str);
        cout<<str;


    }
    infile.close();
    }
    else{
        cout<<"Error opening file!";
    }

    return 0;
}
