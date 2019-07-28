#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file;
    file.open("file.txt");

    string str;

    cout<<"Enter any line to the file: ";
    getline(cin,str);

    file<<str;


    return 0;
}
