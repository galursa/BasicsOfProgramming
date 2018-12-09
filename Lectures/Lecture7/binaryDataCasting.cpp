#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

	fstream binaryFile("dataCasting.dat", ios::out | ios::binary);
	int number = 12345;
	binaryFile.write(reinterpret_cast<char*>(&number), sizeof(number));
	binaryFile.close();
	cout << "I have written the binary file" << "\n";
	return 0;
}
