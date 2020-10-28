#include <iostream>

// User write number for month and we want to write name of month
using namespace std;

int main(int argc, char** argv) {
	int month;
	cout<<"Write number for month please\n";
	cin>>month;
	switch(month){
		case 1:
			cout<<"January\n";
			break;
		case 2 :
			cout<<"February\n";
			break;
		case 3:
			cout<<"March\n";
			break;
		case 4:
			cout<<"April\n";
			break;
		case 5:
			cout<<"May\n";
			break;
		case 6:
			cout<<"June\n";
			break;
		case 7:
			cout<<"July\n";
			break;
		case 8:
			cout<<"August\n";
			break;
		case 9:
			cout<<"Septemper\n";
			break;
		case 10:
			cout<<"October\n";
			break;
		case 11:
			cout<<"November\n";
			break;
		case 12:
			cout<<"December\n";
			break;
		default: 
			cout<<"The number is too big or value is not number \n";			
	}
	
	if(month == 1)
	{
		cout<<"January\n";
	}else if(month == 2)
	{
		cout<<"Febraury\n";
	}else {
		cout<<"The number is too big or value is not number \n";			
	}

	return 0;
}
