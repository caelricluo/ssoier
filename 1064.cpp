#include<iostream>
#include<cstdio>
using namespace std;
int main() 
{
	int n,a=0,b=0,c=0,z=0,l=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>l;
		a+=l;
		cin>>l;
		b+=l;
		cin>>l;
		c+=l;
	}
	z=a+b+c;
	cout<<a<<" "<<b<<" "<<c<<" "<<z;
	return 0;
}