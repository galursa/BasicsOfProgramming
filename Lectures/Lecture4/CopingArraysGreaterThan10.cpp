#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//Make two arrays. One has random elements from <0,20>, 
//Copy elements which are greater than 10 to another array
int main(int argc, char** argv) {
	srand(time(NULL));
	int size = 20;
	int randArray[size];
	int copyArray[size];
	for(int i=0; i<size; i++)
	{
		randArray[i] = rand()%21;
		copyArray[i] = 0;
	}
	cout<<"Copying elements greater than 10 to another array\n";
	cout<<"Before: \n";
	for(int i=0; i<size; i++)
	{
		cout<<randArray[i]<<" ";
	}	
	cout<<"\n";
	for(int i=0; i<size; i++)
	{
		cout<<copyArray[i]<<" ";
	}	
	cout<<"\n";
	int j = 0;
	for(int i=0; i<size; i++)
	{
		if (randArray[i]>10)
		{
			copyArray[j] = randArray[i];
			j++;
		}
	}
	cout<<"After: \n";
	for(int i=0; i<size; i++)
	{
		cout<<randArray[i]<<" ";
	}	
	cout<<"\n";
	for(int i=0; i<size; i++)
	{
		cout<<copyArray[i]<<" ";
	}	
	cout<<"\n";			
	return 0;
}
