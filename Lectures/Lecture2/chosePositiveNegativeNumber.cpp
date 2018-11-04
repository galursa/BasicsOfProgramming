#include <iostream>

using namespace std;

int main(int argc, char** argv) {
 	int number;	
 	cout << "Give a number";
	cin >> number;
	if (number>0)
	{
		cout << "Your number: " << number << " is positive \n";	
	} else {
		cout << "Your number: " << number << " is negative \n";	
	}	
  	return 0;
}
