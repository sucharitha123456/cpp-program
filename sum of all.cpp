#include<iostream>
using namespace std;
int main()
{
	int n,a,sum=0;
	cout<<"\n enter the number";
	cin>>n;
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	cout<<"\n sum of numbers"<<sum<<endl;
	return 0;
}
