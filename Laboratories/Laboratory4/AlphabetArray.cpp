#include <iostream>

// Write alphabet into array

using namespace std;

int main(int argc, char** argv) {
	char alphabet[26];
	int index = 0;
	for(int i=65; i<=90; i++)
	{
		alphabet[index] = (char)i;
		cout<<alphabet[index]<<" ";
		index++;
	}
	cout<<"\n";
	
	return 0;
}
