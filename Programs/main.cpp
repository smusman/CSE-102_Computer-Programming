#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   int amount;
   char country_list[5][100],temp[100];


               cout<<"How many countries? ";
               cin>>amount;
               cin.clear();     cin.ignore();

//TAKES ALL THE COUNTRY NAMES FROM USER
       for(int i=0;i<amount;i++)
       {
                cout<<"\nEnter name of country : ";
                cin.getline(country_list[i],100);
       }

//COMPARE ALL THE COUNTRIES AND CHANGE THE ORDER TO ALPHABETICALLY

        for(int i=0;i<amount;i++)
        {
            for(int j=0;j<amount-1;j++)
            {
                if(strcmp(country_list[j],country_list[j+1])>0)
                {
                   strcpy(temp,country_list[j]);
                   strcpy(country_list[j],country_list[j+1]);
                   strcpy(country_list[j+1],temp);
                }
            }
        }

//DISPLAYS ALL THE COUNTRIES IN ALPHABETICAL ORDER
        for(int i=0;i<amount;i++)
        {
            cout<<"\n\t";

            for(int j=0;country_list[i][j]!='\0';j++)
            {
                cout<<country_list[i][j];
            }
            cout<<endl;
        }


    return 0;
}
