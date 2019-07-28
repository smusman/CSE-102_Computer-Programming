#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float value=12.06;
    cout<<sizeof(float)<<endl;
    cout<<setprecision(20)<<fixed<<value<<endl;
    double dvalue=12.06;
    cout<<setprecision(20)<<fixed<<dvalue<<endl;
    cout<<sizeof(double)<<endl;
    long double lvalue=12.06;
    cout<<setprecision(20)<<fixed<<lvalue<<endl;
    cout<<sizeof(long double)<<endl;


    return 0;
}
