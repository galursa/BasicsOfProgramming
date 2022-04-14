#include <iostream>
#include <string>

enum weekDay {
	monday= 1,
	tuesday = 2,
	wednesday = 3,
	thursday = 4,
	friday = 5,
	saturday = 6,
	sunday =7
};

using namespace std;

int main()
{
    weekDay first = monday;
    weekDay last = sunday;
    cout<<"First day of week "<<first<<"\n";
	cout<<"Last day of week "<<last<<"\n";
	return 0;
}
