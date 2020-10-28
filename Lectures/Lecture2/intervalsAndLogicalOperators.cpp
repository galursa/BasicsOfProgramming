#include <iostream>
//Intervals  - we take value from user and we check if it is in given interval
using namespace std;

int main(int argc, char** argv) {
	int x;
	cout<<"Write first value please\n";
	cin>>x;
	// x in (0,10), we need &&
	if ((x>0)&&(x<10))
	{
		cout<<"Chosen value is in interval (0,10) \n";
	} else {
		cout<<"Chosen value is not in interval (0,10) \n";
	}
	// x in <0,10>
	if ((x>=0)&&(x<=10))
	{
		cout<<"Chosen value is in interval <0,10> \n";
	} else {
		cout<<"Chosen value is not in interval <0,10> \n";
	}
	//x in <0,5>U<10,20>
	if (((x>=0)&&(x<=5))||((x>=10)&&(x<=20)))
	{
		cout<<"Chosen value is in interval <0,5>U<10,20> \n";
	} else {
		cout<<"Chosen value is not in interval <0,5>U<10,20> \n";
	}
	return 0;
}
