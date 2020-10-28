#include <iostream>

using namespace std;
/*
Ex. 5
Write a C++ program that reads from user 3 integer values and print these values in forward and reversed order.
*/
int main()
{
    int val1, val2, val3;
    cout<<"Write first value please\n";
    cin>>val1;
    cout<<"Write second value please\n";
    cin>>val2;
    cout<<"Write third value please\n";
    cin>>val3;
    cout<<"Values in reversed order\n";
    cout<<val3<<" "<<val2<<" "<<val1<<"\n";
    cout<<val3<<"\n"<<val2<<"\n"<<val1<<"\n";
    return 0;
}