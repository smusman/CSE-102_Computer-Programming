#include <iostream>

using namespace std;

int main()
{
    int p=1, coffee=0, tea=0, coke=0, juice=0;
    string input;

    cout<<"1.Coffee"<<"\t"<<"2.Tea"<<"\t"<<"3.Coke"<<"\t"<<"4.Orange Juice"<<endl;
    cout<<endl;

    do
    {
    cout<<"Input favorite beverage of person#: "<<p<<", choose 1,2,3,4 or -1 to exit"<<endl;
    cout<<"========================================================================="<<endl;
    cin >>input;
        if (input == "1")
        {
            coffee++;
        }
        else if (input =="2")
        {
            tea++;
        }
        else if (input =="3")
        {
            coke++;
        }
        else if (input =="4")
        {
            juice++;
        }
        else if (input =="-1")
        {
            cout<<"===================="<<endl;
            cout<<"displaying results.."<<endl;
            cout<<"===================="<<endl;
        }
        else{
            cout<<"INVALID ENTRY"<<endl;
            break;
        }
    p++;
    }while(input!="-1");
    {
        cout<<"BEVERAGE"<<"\t"<<"NUMBER OF VOTES"<<endl;
        cout<<"================================="<<endl;
        cout<<"COFFEE      "<<"\t"<<coffee<<endl;
        cout<<"TEA         "<<"\t"<<tea<<endl;
        cout<<"COKE        "<<"\t"<<coke<<endl;
        cout<<"ORANGE JUICE"<<"\t"<<juice<<endl;

    }


    return 0;
}
