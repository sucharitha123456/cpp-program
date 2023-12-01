#include<iostream>
using namespace std;
int main()
{
	int sum=0,n,m=0,num;
	n=num;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n>0)
	{
		sum=n%10;
		sum=sum+m;
		n=n/10;
	}
	if(n%sum==0)
	{
	cout<<"harshad"<<endl;
	}
	else
	{
		cout<<"not harshad"<<endl;
	}
}
