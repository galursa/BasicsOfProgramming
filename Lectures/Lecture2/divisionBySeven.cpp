#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	/*we take number from user
	  and want to check if it is divided by 7
	*/
	int number;
	cout << "Give a number please. I'm checking if it divided by 7\n";
	cin >> number;

	if ((number%7)==0)
		cout << "The number you have typed is divided by 7 \n";
	else
		cout << "The number divided by 7 has rest= " << number%7;	
	
	cout<<(((number%7)==0) ? "Is divided by 7 \n": "Is not divided by 7 \n ");
	float result;
	result = 3+2*3+5/2;
	cout << result << endl;
	result = (3+2)*(3+5)/2;
	cout << result << endl;
	

	return 0;
}
