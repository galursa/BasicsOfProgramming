#include <iostream>
#include <stdlib.h> 
#include <time.h>

/* github/galursa
/*
generate 5 random numbers, and we want to read two numbers from user, 
we want to check if random numbers are divided by both of these two numbers
*/
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL)); //it gives different numbers for random numbers
	int randomNumber;
	randomNumber = rand()%20 + 1; // after % we write range - it generates from 0 to range-1
	int number1, number2;
	cout<<"Write number 1: \n";
	cin>>number1;
	cout<<"Write number 2: \n";
	cin>>number2;  //% - rest from dividing one number by another
	if ((randomNumber%number1 == 0)&&(randomNumber%number2 == 0))  {  //&& - and, || - or
		cout<<randomNumber<<" is divided by both numbers: "<<number1 <<", "<<number2<<"\n";
	} else {
	    cout<<randomNumber<<" is not divided both by numbers: "<<number1 <<", "<<number2<<"\n";
	}
	randomNumber = rand()%20 + 1;
	if ((randomNumber%number1 == 0)&&(randomNumber%number2 == 0))  {  //&& - and, || - or
		cout<<randomNumber<<" is divided by both numbers: "<<number1 <<", "<<number2<<"\n";
	} else {
	    cout<<randomNumber<<" is not divided both by numbers: "<<number1 <<", "<<number2<<"\n";
	}
	randomNumber = rand()%20 + 1;
	if ((randomNumber%number1 == 0)&&(randomNumber%number2 == 0))  {  //&& - and, || - or
		cout<<randomNumber<<" is divided by both numbers: "<<number1 <<", "<<number2<<"\n";
	} else {
	    cout<<randomNumber<<" is not divided both by numbers: "<<number1 <<", "<<number2<<"\n";
	}randomNumber = rand()%20 + 1;
	if ((randomNumber%number1 == 0)&&(randomNumber%number2 == 0))  {  //&& - and, || - or
		cout<<randomNumber<<" is divided by both numbers: "<<number1 <<", "<<number2<<"\n";
	} else {
	    cout<<randomNumber<<" is not divided both by numbers: "<<number1 <<", "<<number2<<"\n";
	}randomNumber = rand()%20 + 1;
	if ((randomNumber%number1 == 0)&&(randomNumber%number2 == 0))  {  //&& - and, || - or
		cout<<randomNumber<<" is divided by both numbers: "<<number1 <<", "<<number2<<"\n";
	} else {
	    cout<<randomNumber<<" is not divided both by numbers: "<<number1 <<", "<<number2<<"\n";
	}
	return 0;
}
