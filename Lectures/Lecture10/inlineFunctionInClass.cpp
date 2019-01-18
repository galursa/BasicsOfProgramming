#include <iostream>

using namespace std;

class Number
{
	public:
		int a;
		Number()
		{
			a = 5;
		}
		void print()
		{
			cout<<"The number is:" << a << "\n";
		}
};

class Letter
{
	public:
		char b;
		Letter()
		{
			b = 'c';
		}
		inline void print();
};

inline void Letter::print()
{
	cout<<"The letter is:" << b << "\n";
}

int main(int argc, char** argv) {
	Number n1;
	Letter l1;
	
	n1.print();
	l1.print();
	return 0;
}
