#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<endl<<"enter the letters";
	cin>>c;
	if(c== 'a'||c== 'e'||c== 'i'||c== 'o'||c== 'u')
	{
		cout<<endl<<"this is vowels";
	}
	else
	{
		cout<<endl<<"this is consonant";
	}
	return 0;
}
