/******************************************************************************
We want to change cm to inch and inch to cm
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float cm, inch;
    cout<<"Write value in cm please \n";
    cin>>cm;
    cout<<cm<<" cm "<<cm/2.54<<" in\n";
    cout<<"Write value in inch please \n";
    cin>>inch;
    cout<<inch<<" in "<<inch*2.54<<" cm\n";
    
    return 0;
}