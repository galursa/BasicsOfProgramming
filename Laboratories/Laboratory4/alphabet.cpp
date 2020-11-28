#include <iostream>
using namespace std;
//Write alphabet into array

int main(int argc, char** argv) {
	char alphabet[26];
	int index =0;
	for(int i=97; i<=122; i++)
	{
		alphabet[index]=i;
		index++;
	}
	
	
	for(int i=0; i<26; i++)
	{
		cout<<alphabet[i]<<", ";
	}
	cout<<"\n";
	
}
