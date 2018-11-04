#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int number, choice;
	char letter;
	cout << "Make a choice: \n";
	cout << "1. Numbers\n";
	cout << "2. Letters\n";
	cin >> choice;
	if (choice==1)
	{
		cout << "Type a number: \n";
		cin >> number;	
		cout << "You number is: "<<number;
	}
	else if (choice==2)
	{
		cout << "Type a letter: \n";
		cin >> letter;
		cout << "You letter is: "<<letter;
	}
	
	return 0;
}
