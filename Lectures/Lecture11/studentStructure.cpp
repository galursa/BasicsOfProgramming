#include <iostream>
#include <string>

using namespace std;

struct student{
	int studentID;
	string firstName;
	string surname;
};

int main(int argc, char** argv) {
	student computerScience;
	student management;
	computerScience.studentID = 1;
	computerScience.firstName = "Georges";
	computerScience.surname = "Kovalsky";
	management.studentID = 1;
	management.firstName = "Anna";
	management.surname = "Clever";
	cout<<"Student ID: "<<computerScience.studentID ;
	cout<<", first name: "<<computerScience.firstName;
	cout<<", surname: "<<computerScience.surname<<".\n";
	cout<<"Student ID: "<<management.studentID ;
	cout<<", first name: "<<management.firstName ;
	cout<<", surname: "<<management.surname<<".\n";
	return 0;
}
