#include <iostream>

using namespace std;

struct year{
	int number;
};

int main(int argc, char** argv) {
	year arrayOfYears[10];
	for(int i=0;i<10;i++)
		arrayOfYears[i].number=2000+i;
	for(int i=0;i<10;i++)
		cout<<"Year: "<<arrayOfYears[i].number<<"\n";
	return 0;
}
