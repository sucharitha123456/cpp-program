#include<iostream>
using namespace std;
int main()
{
	int first,second,add,subtract,multiply;
	float divide;
	cout<<"please enter the two integers: ";
	cin>>first;
	cin>>second;
	add=first+second;
	subtract=first-second;
	multiply=first*second;
	divide=first/(float)second;
	cout<<endl<<"sum= "<<add;
	cout<<endl<<"difference= "<<subtract;
	cout<<endl<<"multiplication= "<<multiply;
	cout<<endl<<"division= "<<divide;
}
