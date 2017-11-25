#include<iostream>
#include<cstdio>
using namespace std;
int main() 
{
	int n;
	int a,c;
	cin>>n;
	cin>>a;
	c=a;
	for (int i=2;i<=n;i++)
	{
		int b;
		cin>>b;
		if (b<c) c=b;
		if (b>a) a=b;
	}
	cout<<a-c;
	return 0;
}