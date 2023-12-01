#include<iostream>
using namespace std;
int main()
{
	int a,n,t,sum=0;
	cout<<"enter the number";
	cin>>n;
	t=n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a*a*a;
		n=n/10;
	}
	cout<<sum;
	if(t==sum)
	cout<<"it is a armstrong number";
	else
	cout<<"it is a armstrong number";
	return 0;
}
