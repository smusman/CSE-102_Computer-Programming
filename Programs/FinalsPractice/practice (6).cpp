#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main ()
{
    string s;
    cout<<"Write Something to the file> ";

    ofstream outfile("new.txt");

    outfile<<s;

    return 0;
}
