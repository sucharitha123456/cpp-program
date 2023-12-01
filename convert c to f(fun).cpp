#include<iostream>
using namespace std;
int main()
{
	float celsius,fahrenheit;
	cout<<"enter the temperature in celsius: ";
	cin>>celsius;
	fahrenheit = (celsius*9.0)/5.0+32;
	cout<<"the temperature in celsius: "<<celsius<<endl;
	cout<<"the temperature in fahrenheit: "<<fahrenheit<<endl;
	return 0;
}
