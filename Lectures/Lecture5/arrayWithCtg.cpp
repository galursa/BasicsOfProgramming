#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
   // We want generate two-dimentional array with random numbers and calculate ctgx
   int s = 5;
   int randomArray[s][s];
   for(int i=0; i<s; i++)
   {
       for(int j=0; j<s; j++)
       {
           randomArray[i][j] = rand()%10+1;
           cout<<setw(7)<<randomArray[i][j]<<" ";
       }
       cout<<"\n";
   }
   for(int i=0; i<s; i++)
   {
       for(int j=0; j<s; j++)
        {
             cout<<setw(7)<<setprecision(3)<< 1/tan(randomArray[i][j])<<" ";
        }
        cout<<"\n";
   }
    return 0;
}
