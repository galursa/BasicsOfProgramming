#include <iostream>

//Print values from 1 to 10; 1,2,3,
using namespace std;

int main(int argc, char** argv) {
//	for(start;stop;step)
// i++ - we add 1 to i, or i-- it is equivalent to i=i-1
// i+=2 or i=i+2 if start from 2 we arrive at 2, 4, 6, 8, ...
	int i;
	for(i=1; i < 11; i++)    
	{
		cout<<i<<" ";
	}
	cout<<"\n";
	i=1;
	while(i<=10)
	{
		cout<<i<<" ";
		i++;	
	}
	cout<<"\n";	
	i=1;
	do
	{
		cout<<i<<" ";
		i++;	
	}while(i<11);	
	return 0;
}
