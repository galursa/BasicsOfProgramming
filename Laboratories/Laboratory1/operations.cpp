#include <iostream>

using namespace std;
/*
Ex. 
We want to read two values from user: integer and floating point. And we want to make operations on them.
*/
int main()
{
    int intValue;
    float floatValue;  // 3.14
    cout<<"Write integer value please\n";
    cin>>intValue;
    cout<<"Write floating point value please\n";
    cin>>floatValue;
    cout<<"Addition ="<<intValue+floatValue<<"\n";
    cout<<"Changing from floating point value to integer ="<<(int)floatValue<<"\n";
    cout<<"Multiplication ="<<intValue*floatValue<<"\n";
    cout<<"Division ="<<intValue/floatValue<<"\n";
    cout<<"Modulo division ="<<(int)floatValue%intValue<<"\n";
    return 0;
}