#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

struct MyException : public exception {
   const char * what () const throw () {
      return "Invalid exponent";
   }
};

char PowerWithSign(int value, int exponent)
{
	if(exponent<0)
		throw MyException();
	if (pow(value,exponent)<0)
		return '-';
	if (pow(value,exponent)>0)
		return '+';
}

int main() {
   try {
      cout<<"Raise 2 to power 2, sing check:"<<PowerWithSign(2,2)<<"\n";
      cout<<"Raise -3 to power 3, sing check"<<PowerWithSign(-3,3)<<"\n";
      cout<<"Raise 3 to power -1, sing check:"<<PowerWithSign(3,-1)<<"\n";
   } catch(MyException& e) {
      cout <<"Error: "<< e.what() <<"\n";
   } catch(exception& e) {
      cout<<"Undefined error\n";
   }
}
