#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string sentence = "Hello";
	string name;
	cout << "Type your name please.\n";
	cin >> name;
	sentence = sentence + " ";
	sentence += name;
	cout << sentence;
	return 0;
}

