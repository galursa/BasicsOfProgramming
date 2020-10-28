#include <iostream>
//we read character value and we check if this is a letter and then we print integer value.

using namespace std;

int main(int argc, char** argv) {
	char letter;
	cout<<"Write one symbol, please \n";
	cin>>letter;
	//65 - 90 - capital letters, 97-122 - small letters
	
	if (((letter>=65)&&(letter<=90))||((letter>=97)&&(letter<=122)))
	{
		cout<<"It is a letter with code: "<<(int)letter<< "\n";
	}else
	{
		cout<<"This is not a letter\n";
	}
	return 0;
}
