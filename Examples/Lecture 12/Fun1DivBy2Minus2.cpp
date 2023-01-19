#include <iostream>

using namespace std;

float xDivByXMinus2(float x)
{
    if(x==2)
    {
        throw domain_error("Value is not allowed. Function cannot be calculated");
    }
    return 1/(x-2);
}

int main()
{
    try{
        cout<<xDivByXMinus2(3)<<"\n";
        cout<<xDivByXMinus2(4)<<"\n";
        cout<<xDivByXMinus2(-2)<<"\n";
        cout<<xDivByXMinus2(2)<<"\n";
        cout<<xDivByXMinus2(-4)<<"\n";
    }catch(domain_error &e)
    {
        cout<<e.what()<<"\n";
    }
    cout<<"Thank you for using the program\n";
    return 0;
}
