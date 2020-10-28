#include <iostream>
//we want to print && || ! results
using namespace std;

int main(int argc, char** argv) {
	int number1, number2;
	cout<<"Write first value please\n";
	cin>>number1;
	cout<<"Write second value please\n";
	cin>>number2; 
	cout<<"!("<<number1<<"+"<<number2<<") ="<<!(number1 + number2)<<"\n";
	//&& means and - one statement and another statement
	//we want to check if number1 is greater than number 2 and if number1 can be divided by number2
	//((number1 > number2)&&(number1 % number2 == 0))
	cout<<"(("<<number1<<">"<< number2<<")&&("<<number1<<" % "<<number2 <<"== 0)) ="<<((number1 > number2)&&(number1 % number2 == 0))<<"\n";
	//|| means or - one statement OR another statement
	cout<<"(("<<number1<<">"<< number2<<")||("<<number1<<" % "<<number2 <<"== 0)) ="<<((number1 > number2)||(number1 % number2 == 0))<<"\n";
	return 0;
}
