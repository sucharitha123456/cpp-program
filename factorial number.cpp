#include<iostream>
using namespace std;
int main()
{
	int fact=1,n,i;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
 	cout<<"factorial number is"<<fact;
	return 0;
}
