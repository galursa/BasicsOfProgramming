#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int number;
	cout << "Type number between 1 and 9 to go out of loop\n";
	cout << "While loop: \n";
	cin >> number;
	while(number<=1||number>=9)
	{
		cin >> number; 
	}
		
	number=0;
	cout << "Do-while loop: \n";
	do
	{
		cin >> number; 
	}while(number<=1||number>=9);
	
	number=0;
	cout << "For loop: \n";
	for(;number<=1||number>=9;)
	{
		cin >> number; 
	}
	return 0;
}
