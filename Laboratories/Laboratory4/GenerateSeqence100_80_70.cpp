#include <iostream>
using namespace std;
//Generate sequence and write into array 100, 90, 80,...

int main(int argc, char** argv) {
	int sequence[10];
	int index = 0;
	for(int i =100; i >=10 ; i-=10 )
	{
		sequence[index] = i;
		index++;
	}
	for(int i=0; i<10; i++)
	{
		cout<<sequence[i]<<" ";
	}
	cout<<"\n";
}
