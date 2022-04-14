#include <iostream>
#include <iomanip>

union units
{
	float celsius;
	float kelvin;
	float fahrenheit;
} temperature;

float celsiusToFahrenheit(float celsius)
{
	float fahrenheit = celsius*9/5+32;
	return fahrenheit;
}

float celsiusToKelvin(float celsius)
{
	return celsius+ 274.15;
}

using namespace std;

int main()
{
    temperature.celsius = 30;
	cout<<"Temperature:\n";
	cout<<"in Celsius scale: "<<temperature.celsius<<"\n";
	temperature.fahrenheit=celsiusToFahrenheit(temperature.celsius);
	cout<<"in Fahrenheit scale:"<<temperature.fahrenheit<<"\n";
	temperature.kelvin = celsiusToKelvin(30);
	cout<<"in Kelvin scale:"<<temperature.kelvin<<"\n";
	return 0;
}
