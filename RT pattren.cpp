#include<iostream>
using namespace std;
int main()
{
	int i,n,s,j;
	cout<<"enter the number";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		{
			cout<<"";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
