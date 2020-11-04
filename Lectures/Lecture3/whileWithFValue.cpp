#include <iostream>

// we want to read letters or symbols from user and we want to stop when user writes 'f'
using namespace std;

int main() {
	char symbol = 'a';
	cout<<"While loop \n";
	while(symbol!='f'){
		cout << "Write your symbol: (\'f\' - stops)\n";
		cin >> symbol;
	}
	symbol = 'a';
	cout<<"For loop \n";
	for( ;symbol!='f'; )
	{
		cout << "Write your symbol: (\'f\' - stops)\n";
		cin >> symbol;
	}
	return 0;
}
