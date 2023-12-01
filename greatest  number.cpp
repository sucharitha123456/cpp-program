#include<iostream>
using namespace std;
int main()
{
	int n1,n2,greatest;
	cout<<endl<<"enter the two numbers";
	cin>>n1>>n2;
	greatest=(n1>n2)?n1:n2;
	cout<<endl<<"the greatest number is" << greatest;
	return 0;
}
