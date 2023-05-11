#include <iostream>
#include <iomanip>
using namespace std;

// f(x)=a*x+b
//f(x)=2x+3
float linFunc(float x, float a, float b)
{
    return a*x+b;
}

void linFuncTable()
{
    cout<<"x:   ";
    for(int i=-2; i<=2; i++)
    {
        cout<<setw(4)<<i<<" ";
    }
    cout<<"\n";
    cout<<"f(x):";
    for(int i=-2; i<=2; i++)
    {
        cout<<setw(4)<<linFunc((float) i,2,1)<<" ";
    }
    cout<<"\n";
}


int main()
{
    cout<<"Lineal Function Calculations\n";
    linFuncTable();
    return 0;
}
