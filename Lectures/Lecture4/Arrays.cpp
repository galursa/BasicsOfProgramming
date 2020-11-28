#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int size = 5;
	int intArray[size];
	
	for(int i=0; i<size; i++)
	{
		intArray[i]=0;
		cout<<intArray[i]<<" ";
	}
	cout<<"\n";
	
	char words[size];
	for(int i=0; i<size; i++)
	{
		words[i]=i+100;
		cout<<words[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}
