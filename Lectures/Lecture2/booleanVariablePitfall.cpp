#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int grade, number = 4, points = 30;
	
	if (!(points > 90))
		grade=4;
	else
		grade=5;
		
	cout << "Your grade is: " << grade << "\n";	
	
	return 0;
}
