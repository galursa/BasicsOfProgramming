#include <iostream>
//we read letter from user and we want to print keyword which starts with the letter

using namespace std;

int main(int argc, char** argv) {
	char letter;
	cout<<"Write one symbol, please \n";
	cin>>letter;
	switch(letter)
	{
		case 'i':
			cout<<"if\n";
			break;
		case 's':
			cout<<"switch\n";
			break;
		case 'c':
			cout<<"cout\n";
			break;
		default:
			cout<<"There is keyword starting with this letter\n";
	}
	
	
	
	return 0;
}
