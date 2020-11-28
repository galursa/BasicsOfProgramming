#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    //Array generated randomly and calculate ctgx
    int size = 5;
    int array[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            array[i][j] = rand()%99+1;
            cout<<setw(4)<<array[i][j];
        }
        cout<<"\n";
    }
    double ctan[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
           ctan[i][j] = 1/tan(array[i][j]);
           cout<<setw(7)<<setprecision(2)<<ctan[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
