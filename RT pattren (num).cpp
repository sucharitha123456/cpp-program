#include<iostream>
using namespace std;
int main()
{
  int i,n,j;
  cout<<"enter the number";
  cin>>n;
  for(i=0;i<=n;i++)
  {
      cout<<""; 
    for(j=1;j<=i;j++)
    {
      cout<<i,j,n;
    }
    cout<<"\n";
  }
}
