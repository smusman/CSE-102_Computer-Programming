#include <iostream>

using namespace std;

int main()
{
    int SubNumber=1;
    string sub;
    float gpa=0;
    float numerator=0;
    float a=0;
    int tch=0;
    int ch;
    int i;

    cout<<"Enter total number of subjects> ";

    cin>> i;

    while(SubNumber<=i)
    {


    cout<< "Input Grade of Subject "<< SubNumber <<"> "<< flush;
    cin>> sub;

    if (sub == "A" || sub == "a")
    {
        gpa=4;
    }
    else if (sub == "A-" || sub == "a-")
    {
        gpa=3.67;
    }
     else if (sub == "B+" || sub == "b+")
    {
        gpa=3.33;
    }
     else if (sub == "B" || sub == "b")
    {
        gpa=3.0;
    }
     else if (sub == "B-" || sub == "b-")
    {
        gpa=2.67;
    }
     else if (sub == "C+" || sub == "c+")
    {
        gpa=2.33;
    }
     else if (sub == "C" || sub == "c")
    {
        gpa=2.00;
    }
     else if (sub == "C-" || sub == "c-")
    {
        gpa=1.67;
    }
     else if (sub == "D+" || sub == "d+")
    {
        gpa=1.33;
    }
     else if (sub == "d" || sub == "d")
    {
        gpa=1.0;
    }
     else if (sub == "F" || sub == "f")
    {
        gpa=0;
    }
    else
    {
        cout<<"Invalid Entry";

    }


    cout<< "Input Credit Hour(s) for Subject 1> "<< flush;
    cin>>ch;


    a=gpa*ch;
    numerator=numerator+a;
    tch=tch+ch;





    cout<<"================="<<endl;

    SubNumber++;


    }
    cout<<"YOUR CGPA IS "<<numerator/tch<<endl;

    return 0;
}
