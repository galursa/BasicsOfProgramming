#include <iostream>

// We want to print X
/*   1 2 3
  1| *   *
  2|   * 
  3| *   *
*/
using namespace std;
int main() {
	int size, k;
	cout<<"Type size for identity matrix\n";
	cin>>size;	
	k=size;
	for(int i = 1; i<=size ; i++ )
	{
		for(int j = 1; j<=size ; j++ )
		{
			if(i != j)
				if(j == k)
					cout<<"* ";
				else
					cout<<"  ";
			else
			{
				cout<<"* ";
			}
		}
		k--;
		cout<<"\n";
	}
	return 0;
}
