#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	int size = 10;
	char arrayOne[size];
	//generating
	srand (time(NULL));	
	int numOfLetters = 90 -65+1;
	for (int i=0; i<size; i++)
	{
		arrayOne[i] = 65 + rand() % (numOfLetters)+1;
	}
	//printing
	for (int i=0; i<size; i++)
		cout << arrayOne[i] << " ";
	cout << "\n";	
	//initializing array
	int letterCount[numOfLetters];
	for (int i=0; i<numOfLetters; i++)
		letterCount[i]=0;
	//counting
	for (int i=0; i<size; i++)
		letterCount[arrayOne[i]-'A']++;
	for (int i=0; i<numOfLetters; i++)
		cout<<(char)(i+65) <<" : " << letterCount[i] << "\n";
	
	
			

}
