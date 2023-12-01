#include<iostream>
using namespace std;
int main()
{
	int a=15,b=13;
	cout<<"before swapping a="<< a <<"and b="<< b <<".\n";
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"after swapping a="<< a <<"and b="<< b <<".\n";
}
