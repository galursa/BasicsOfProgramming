#include <iostream>

using namespace std;
//We read value from user and we rite it into every second place in the array
//   0|1|2 |3|4 |5|6|   - indices  
// | 3| |3 | |3 | |3|   - values
int main(int argc, char** argv) {
	cout<<"Write some integer value, please\n";
	int userValue, size = 20;
	cin>>userValue;
	int array[size];
	for(int i=0; i<size; i++)
	{
		array[i] = 0;
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	for(int i=0; i<size; i+=2)
	{
		array[i]=userValue;
	}
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}		
	return 0;
}
