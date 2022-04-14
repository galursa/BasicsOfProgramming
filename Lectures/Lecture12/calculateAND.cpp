#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float nRoot(float number, int degree)
{
	if (number<=0.0)
	{
		string excep = "Function cannot be calculated. Value is less than or equal to zero. ";
		throw excep;
	}
	if (degree<2)
	{
		string excep = "Function cannot be calculated. Degree is less than two";
			throw excep;
	}
	return pow(number,1/float(degree));
}
int main(int argc, char** argv) {
	try{
		cout<<nRoot(4.0,2)<<"\n";
		cout<<nRoot(1.5,3)<<"\n";
		cout<<nRoot(-2.3,3)<<"\n";
	} catch (string w)
	{
		cout<<w<<"\n";
	}
	try{
		cout<<nRoot(9.0,2)<<"\n";
		cout<<nRoot(3.0,1)<<"\n";
	}catch (string w)
	{
		cout<<w<<"\n";
	}
	return 0;
}

