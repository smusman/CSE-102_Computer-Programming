#include <iostream>

using namespace std;

int main()
{
    string sub1;
    cout<< "Input Subject 1 Grade> "<< flush;
    cin>>sub1;

    float a;
    if (sub1 == "A" || sub1 == "a")
    {
        a=4;
    }
    else if (sub1 == "A-" || sub1 == "a-")
    {
        a=3.67;
    }
     else if (sub1 == "B+" || sub1 == "b+")
    {
        a=3.33;
    }
     else if (sub1 == "B" || sub1 == "b")
    {
        a=3.0;
    }
     else if (sub1 == "B-" || sub1 == "b-")
    {
        a=2.67;
    }
     else if (sub1 == "C+" || sub1 == "c+")
    {
        a=2.33;
    }
     else if (sub1 == "C" || sub1 == "c")
    {
        a=2.00;
    }
     else if (sub1 == "C-" || sub1 == "c-")
    {
        a=1.67;
    }
     else if (sub1 == "D+" || sub1 == "d+")
    {
        a=1.33;
    }
     else if (sub1 == "D" || sub1 == "d-")
    {
        a=1.0;
    }
     else if (sub1 == "F" || sub1 == "f")
    {
        a=0;
    }
    else
    {
        cout<<"Invalid Entry";

    }

    int ch1;
    cout<< "Input Credit Hour(s) for Subject 1> "<< flush;
    cin>>ch1;

    cout<<"================="<<endl;

    string sub2;
    cout<< "Input Subject 2 Grade> "<< flush;
    cin>>sub2;

    float b;
    if (sub2 == "A" || sub2 == "a")
    {
        b=4;
    }
    else if (sub2 == "A-" || sub2 == "a-")
    {
        b=3.67;
    }
     else if (sub2 == "B+" || sub2 == "b+")
    {
        b=3.33;
    }
     else if (sub2 == "B" || sub2 == "b")
    {
        b=3.0;
    }
     else if (sub2 == "B-" || sub2 == "b-")
    {
        b=2.67;
    }
     else if (sub2 == "C+" || sub2 == "c+")
    {
        b=2.33;
    }
     else if (sub2 == "C" || sub2 == "c")
    {
        b=2.00;
    }
     else if (sub2 == "C-" || sub2 == "c-")
    {
        b=1.67;
    }
     else if (sub2 == "D+" || sub2 == "d+")
    {
        b=1.33;
    }
     else if (sub2 == "D" || sub2 == "d-")
    {
        b=1.0;
    }
     else if (sub2 == "F" || sub2 == "f")
    {
        b=0;
    }

    int ch2;
    cout<< "Input Credit Hour(s) for Subject 2> "<< flush;
    cin>>ch2;

    cout<<"================="<<endl;

    string sub3;
    cout<< "Input Subject 3 Grade> "<< flush;
    cin>>sub3;

    float c;
    if (sub3 == "A" || sub3 == "a")
    {
        c=4;
    }
    else if (sub3 == "A-" || sub3 == "a-")
    {
        c=3.67;
    }
     else if (sub3 == "B+" || sub3 == "b+")
    {
        c=3.33;
    }
     else if (sub3 == "B" || sub3 == "b")
    {
        c=3.0;
    }
     else if (sub3 == "B-" || sub3 == "b-")
    {
        c=2.67;
    }
     else if (sub3 == "C+" || sub3 == "c+")
    {
        c=2.33;
    }
     else if (sub3 == "C" || sub3 == "c")
    {
        c=2.00;
    }
     else if (sub3 == "C-" || sub3 == "c-")
    {
        c=1.67;
    }
     else if (sub3 == "D+" || sub3 == "d+")
    {
        c=1.33;
    }
     else if (sub3 == "D" || sub3 == "d-")
    {
        c=1.0;
    }
     else if (sub3 == "F" || sub3 == "f")
    {
        c=0;
    }

    int ch3;
    cout<< "Input Credit Hour(s) for Subject 3> "<< flush;
    cin>>ch3;

    cout<<"================="<<endl;

    string sub4;
    cout<< "Input Subject 4 Grade> "<< flush;
    cin>>sub4;

    float d;
    if (sub4 == "A" || sub4 == "a")
    {
        d=4;
    }
    else if (sub4 == "A-" || sub4 == "a-")
    {
        b=3.67;
    }
     else if (sub4 == "B+" || sub4 == "b+")
    {
        d=3.33;
    }
     else if (sub4 == "B" || sub4 == "b")
    {
        d=3.0;
    }
     else if (sub4 == "B-" || sub4 == "b-")
    {
        d=2.67;
    }
     else if (sub4 == "C+" || sub4 == "c+")
    {
        d=2.33;
    }
     else if (sub4 == "C" || sub4 == "c")
    {
        d=2.00;
    }
     else if (sub4 == "C-" || sub4 == "c-")
    {
        d=1.67;
    }
     else if (sub4 == "D+" || sub4 == "d+")
    {
        d=1.33;
    }
     else if (sub4 == "D" || sub4 == "d-")
    {
        d=1.0;
    }
     else if (sub4 == "F" || sub4 == "f")
    {
        d=0;
    }

    int ch4;
    cout<< "Input Credit Hour(s) for Subject 4> "<< flush;
    cin>>ch4;


    int sum=ch1+ch2+ch3+ch4;
    float dividend=(a*ch1)+(b*ch2)+(c*ch3)+(d*ch4);
    float res=dividend/sum;

    cout<<"================="<<endl;
    cout<<"YOUR CGPA IS "<<res<<endl;
    cout<<"================="<<endl;


    return 0;
}
