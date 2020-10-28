#include <iostream>

// ? operator



using namespace std;

int main(int argc, char** argv) {
	// we want to check if one number is divided by another
	int number1, number2;
	cout<<"Writen number 1, please \n";
	cin>>number1;
	cout<<"Writen number 2, please \n";
	cin>>number2;
//	(condition)? what happen when condition is true : what happen when condition is false;
    cout<<((number1%number2 == 0)? "We can divide\n" : "We cannot divide\n");
    //we want to find maximum	
	float num1 = 3.2, num2 = 5.2;
	float max = num1 > num2 ? num1 : num2;
	cout<<"Maximum: "<<max<<"\n";
	
	return 0;
}
