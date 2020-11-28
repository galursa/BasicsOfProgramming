#include <iostream>
#include<iomanip>
using namespace std;
int main()
{    //                                             0 1  2  3
    //we want to generate two-dimentional array 0 |12 0 121 0
    //                                          1 | 0 12 0  13
    //we want to print this array as readable as possible
    int arrSize = 5;
    int numberArray[arrSize][arrSize];
    for (int i=0; i<arrSize; i++)
    {
        for(int j=0; j<arrSize; j++)
        {
            if((i+j)%2==0)
            {
                numberArray[i][j] = rand()%100+1;
            }else{
                numberArray[i][j] =0;
            }
            cout<<setw(4)<<numberArray[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
