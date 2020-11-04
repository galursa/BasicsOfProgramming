#include <iostream>

// We want print Identity Matrix, we want to take size from user
/*   1 2 3
  1| 1 0 0
  2| 0 1 0
  3| 0 0 1
*/

using namespace std;

int main() {
	int size;
	cout<<"Type size for identity matrix\n";
	cin>>size;
	
	for(int i = 1; i<=size ; i++ )
	{
		for(int j = 1; j<=size ; j++ )
		{
			if(i == j)
				cout<<1<<" ";
			else	
				cout<<0<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
