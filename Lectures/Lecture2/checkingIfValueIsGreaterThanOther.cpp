#include <iostream>
//we read two values from user and we want to check which one is greater.

using namespace std;

int main(int argc, char** argv) {
	int num1, num2;
	cout<<"Write first number, please \n";
	cin>>num1;
	cout<<"Write second number, please \n";
	cin>>num2;
	cout<<((num1>num2)?"First value is greater":"Second value is greater")<<"\n";
	
	return 0;
}
