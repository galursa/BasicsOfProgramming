#include <iostream>

// We read value from user and we want to check if value is greater than 0 or not
using namespace std;

int main(int argc, char** argv) {
	cout<<"Write number please\n";
	float number;
	cin>>number; // == >0 <0
	if(number == 0)
	{
		cout<<number<<" is equal to zero\n";
	} else if(number > 0)
	{
		cout<<number<<" is positive\n";
	} else
	{
		cout<<number<<" is negative\n";
	}
	return 0;
}
