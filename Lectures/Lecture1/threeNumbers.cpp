#include <iostream>
#include <string>
/*
	We read three values from users. And then we calculate
	/, -, %, and we print results twice: in good order and 
	in reverse order.
*/
using namespace std;
int main() {
	int var1, var2, var3;
	cout<<"Write variable one, please.\n";
	cin>>var1;
	cout<<"Write variable two, please.\n";
	cin>>var2;
	cout<<"Write variable three, please.\n";
	cin>>var3;
	float division;
	int difference,  moduloDiv;
	division = (float)var1/(float)var2;
	cout<<"Division: "<<var1<<"/"<<var2<<"="<<division<<"\n";
	difference = var2 - var3;
	cout<<"Difference: "<<var2<<"-"<<var3<<"="<<difference<<"\n";
	moduloDiv = var3%var1;
	cout<<"Modulo division: "<<var3<<"%"<<var1<<"="<<moduloDiv<<"\n";
	cout<<" \"Good\" order \n";
	cout<<division<<"\n";
	cout<<difference<<"\n";
	cout<<moduloDiv<<"\n";
	cout<<" Reversed order \n";
	cout<<moduloDiv<<"\n";
	cout<<difference<<"\n";
	cout<<division<<"\n";	
	return 0;
}


