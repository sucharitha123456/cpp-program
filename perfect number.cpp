#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,rem;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	cout<<"the number is a perfect";
	else
	cout<<"the number is not a perfect";
	return 0;
}
