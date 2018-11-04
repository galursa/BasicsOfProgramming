#include <iostream>

using namespace std;

int main(int argc, char** argv) {
/* We take number from user
	We want to check if number is in range between 0 and 100
*/
	float number;
	cout << "Give a floating point number please";
	cin >> number;
	cout << (((number>0)&&(number<=100)) ? "The number is in (0,100>" : "The number is out of range");
	return 0;
}
