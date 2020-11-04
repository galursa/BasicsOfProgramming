#include <iostream>
// we want to print identity matrix
/*   1 2 3 
 1  |1 0 0
 2  |0 1 0
 3  |0 0 1
*/
using namespace std;
int main(int argc, char** argv) {
	int size;
	cout << "Write size of matrix, please\n";
	cin >> size;
	
	for(int i = 1; i<size+1; i++)
	{
		for(int j = 1 ; j<size+1 ; j++ )
		{
			if (i == j)
				cout<<1<<" ";
			else
				cout<<0<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
