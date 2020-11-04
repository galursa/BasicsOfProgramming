#include <iostream>

// We want to print christmas tree
// Later we want to take size from user.
/* 1 2 3 4 5
1|     *
2|   * * *
3| * * * * *
*/
using namespace std;

int main() {
	cout<<"Generates christmas tree\n";
    int size, k = 0;
	cout<<"Write size for chrimstmas tree \n";
	cin>>size; 
	for(int i = 1; i<=size; i++)
	{
		for(int j = 1; j<=size-i; j++)
		{
			cout<<" ";
		}
		for(int j = 1; j<=i+k; j++)
		{
			cout<<"*";
		}
		k++;
		cout<<"\n";
	}

	return 0;
}
