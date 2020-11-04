#include <iostream>

/* we want to print numbers from 20 to 1 */
using namespace std;

int main(int argc, char** argv) {
	int i = 20;
	
	do
	{
		cout<<i<<" ";
		i--; //i=i-1 we arrive at: 20, 19, 18, ..., 1	
	}while(i>=1); // i>=1 or i>0
	
	cout<<"\n";
	i = 20;
	while(i>=1)
	{
		cout<<i<<" ";
		i--; //i=i-1 we arrive at: 20, 19, 18, ..., 1	
	}
	cout<<"\n";
	for(i = 20 ; i>=1 ; i--) 
	{
			cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
