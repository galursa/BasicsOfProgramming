/*
We take five numbers from user and calculate mean
*/
#include <iostream>

using namespace std;

int main()
{
    float v1, v2, v3, v4, v5;
    cout<<"Write first number please \n";
    cin>>v1;
    cout<<"Write second number please \n";
    cin>>v2;
    cout<<"Write  third number please \n";
    cin>>v3;
    cout<<"Write fourth number please \n";
    cin>>v4;
    cout<<"Write fifth number please \n";
    cin>>v5;
    float mean;
    mean = (v1+v2+v3+v4+v5)/5;
    cout<<"Mean: "<<mean<<"\n";
    cout<<(v1+v2+v3+v4+v5)/5;
    return 0;
}
