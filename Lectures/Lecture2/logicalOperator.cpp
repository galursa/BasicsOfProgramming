#include <iostream>

//we want read two values from user and we want to print >, <, ==, != condition and its result

using namespace std;

int main(int argc, char** argv) {
	int number1, number2;
	cout<<"Write first value please\n";
	cin>>number1;
	cout<<"Write second value please\n";
	cin>>number2; //(number1>number2)
	cout<<"("<<number1<<">"<<number2<<") ="<<(number1 > number2)<<"\n";
	cout<<"("<<number1<<">="<<number2<<") ="<<(number1 >= number2)<<"\n";
	cout<<"("<<number1<<"<"<<number2<<") ="<<(number1 < number2)<<"\n";
	cout<<"("<<number1<<"<="<<number2<<") ="<<(number1 <= number2)<<"\n";
	cout<<"("<<number1<<"="<<number2<<") ="<<(number1 == number2)<<"\n";
	cout<<"("<<number1<<"!="<<number2<<") ="<<(number1 != number2)<<"\n";
	
	
	return 0;
}
