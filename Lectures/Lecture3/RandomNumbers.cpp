#include <iostream>
#include <cstdlib>
#include <ctime>
/* we want to generate 10 random numbers */
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL)); //seed - first value for genarator
	int randomValue, i  = 1;
	
	while(i<11)  //i < 11 or i <=10
	{
		randomValue = rand()%10 + 1;  //range 1-10
		cout<<i<<":"<<randomValue<<" ";
		i++; //i=i+1 we arrive at i = 1,2,3,4,...,10
	}
	
	return 0;
}
