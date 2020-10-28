#include <iostream>
//we want to find minimum value using switch
using namespace std;

int main(int argc, char** argv) {
	int num1, num2;
	cout<<"Write first value please\n";
	cin>>num1;
	cout<<"Write second value please\n";
	cin>>num2;
	switch(num1<num2)
	{
		case 0:
			cout<<num2<<" is less than or equal to "<<num1<<"\n";
			break;
		case 1:		
			cout<<num1<<" is less than "<<num2<<"\n";
			break;
		default:
			cout<<"Incorrect value or character\n";
	}
	//(condition)? do if true: do if false
	int minimum = (num1<num2) ? num1 : num2;
	cout<<"Minimum value "<<minimum<<"\n";
	
	return 0;
}
