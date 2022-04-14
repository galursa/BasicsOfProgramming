#include <iostream>
#include <stdexcept>
using namespace std;

float oneDivByX(float x)
{
	if(x==0)
	{
		throw domain_error("Division by zero");
	}
	return 1/x;
}

int main(int argc, char** argv) {
	try{
		try{
			cout<<oneDivByX(1)<<"\n";
			cout<<oneDivByX(2)<<"\n";
			cout<<oneDivByX(3)<<"\n";
			cout<<oneDivByX(0)<<"\n";
		}catch(exception &b)
		{
			cout<<"Undefined error";
		}
	} catch (domain_error & b)
	{
		cout<<"Error: "<<b.what()<<"\n";
	}
	return 0;
}
