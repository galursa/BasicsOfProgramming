#include <iostream>
#include <stdexcept>
using namespace std;

int calculateOR(int p, int q)
{
	if ((p!=0&&p!=1)||(q!=0&&q!=1))
	{
		throw invalid_argument("Invalid argument was given.");
	}

	return p or q;
}

int main(int argc, char** argv) {
	try{
		cout<<calculateOR(0,1)<<"\n";
		cout<<calculateOR(1,1)<<"\n";
		cout<<calculateOR(0,0)<<"\n";
		cout<<calculateOR(1,0)<<"\n";
		cout<<calculateOR(2,1)<<"\n";
	} catch (invalid_argument & b)
	{
		cout<<"Error: "<<b.what()<<"\n";
	}
	return 0;
}
