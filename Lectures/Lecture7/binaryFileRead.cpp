#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	fstream binaryFile("names.dat", ios::in | ios::binary);
	char s[15];
	binaryFile.read(s,15);
	cout << "Number of chars read: " << binaryFile.gcount() << endl;
	 s[binaryFile.gcount()] = '\0'; // Append a C-string terminator
	cout << s << "\n";
	binaryFile.close();
	return 0;
}

