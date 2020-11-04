#include <iostream>

// We want to print numbers from 1 to 100 using loop 
// We want sequence 10, 20, 30, ...
// Later we want to take size of the step from user
using namespace std;

int main() {
	cout<<"Generates numbers from 1 to 100\n";
	int step;
	cout<<"Write your step for loop \n";
	cin>>step;
	
	for(int i = step ;i<=100 ;i+=step ) //i=i+10
	{
		cout<<i<<" ";
	}
	
	return 0;
}
