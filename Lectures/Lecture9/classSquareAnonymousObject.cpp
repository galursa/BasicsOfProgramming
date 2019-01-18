#include <iostream>
#include <iomanip>

using namespace std;

class Square
{
	public:
		double a;
		Square()
		{
			a=2;
		}
		
		double area()
		{
			return a*a;
		}
};

int main(int argc, char** argv) {
	cout << "Area of the square: " << Square().a << " * " << Square().a <<" = " <<Square().area() << "\n";
	return 0;
}
