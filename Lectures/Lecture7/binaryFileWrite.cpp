#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	fstream binaryFile("names.dat", ios::out | ios::binary);
	string s = "Agnes";
	binaryFile.write(s.c_str(), s.size()); 
	binaryFile.close();
	cout << "I have written the binary file" << "\n";
	return 0;
}


