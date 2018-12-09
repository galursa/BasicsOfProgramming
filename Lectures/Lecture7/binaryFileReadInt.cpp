#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	fstream binaryFile("dataCasting.dat", ios::in | ios::binary);
	int number;
	binaryFile.read(reinterpret_cast<char*>(&number), sizeof(number));
	cout << number << "\n";
	binaryFile.close();
	return 0;
}

