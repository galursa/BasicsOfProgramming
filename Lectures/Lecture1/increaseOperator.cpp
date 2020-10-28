/*
 we want to generate five numbers. we read first value from user
 And then we add 1 in every step.
*/
#include <iostream>

using namespace std;

int main()
{
    int firstValue;
    cout<<"Write first number please \n";
    cin>>firstValue;
    cout<<"Sequence: \n";
    cout<<firstValue<<" ";
    firstValue++; //firstValue = firstValue+1;
    cout<<firstValue<<" ";
    firstValue++; //firstValue = firstValue+1;
    cout<<firstValue<<" ";
    firstValue++; //firstValue = firstValue+1;
    cout<<firstValue<<" ";
    firstValue++; //firstValue = firstValue+1;
    cout<<firstValue<<" \n";
    cout<<firstValue++<<"\n";
    cout<<firstValue<<"\n";
    cout<<++firstValue<<"\n";
    cout<<firstValue<<"\n";
    return 0;
}
