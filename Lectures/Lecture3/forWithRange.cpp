#include <iostream>

/* we want to read range from user  and generate numbers withing range with for loop*/
/* we want to generate numbers from lower to upper value */
using namespace std;

int main(int argc, char** argv) {
	int leftRange, rightRange;
	cout<<"Give lower value please.\n";
	cin>>leftRange;
	cout<<"Give upper value please.\n";
	cin>>rightRange;
	if(leftRange > rightRange)
	{
		int temp = leftRange;
		leftRange = rightRange;
		rightRange = temp;
	}
	cout<<"Lower value: "<<leftRange<<", upper value: "<<rightRange<<"\n";

	for(int i = leftRange; i<=rightRange; i++)  //with step we can write eg. increase i by 2:  i+=2 or i=i+2
	{
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
