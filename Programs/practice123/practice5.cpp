#include <iostream>
using namespace std;
float average(float marks[5]);

int main ()
{
    float marks[5] = {20,30,40,50,60};
    float avg;

    avg=average(marks);

    cout<<"Average = "<<avg;
    return 0;
}

float average(float marks[5])
{
    float sum,avg;
    int i;
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }

    avg=sum/5;
    return avg;
}
