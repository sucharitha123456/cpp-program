#include<iostream>
using namespace std;
int main()
{
  int i,n,j;
  cout<<"enter the number";
  cin>>n;
  for(i=0;i<=n;i++)
  {
    for(j=n-i;j>0;j--)
    {
      cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
      cout<<j;
    }
    for(j=i-1;j>=1;j--)
    {
      cout<<j;
    
    }
      cout<<"\n";
  }
}
