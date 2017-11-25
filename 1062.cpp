#include<iostream>
#include<cstdio>
using namespace std;
int main() 
{
	int n;
	int a;
	cin>>n;
	cin>>a;
	for (int i=2;i<=n;i++)
	{
		int b;
		cin>>b;
		if (b>a) a=b;
	}
	cout<<a;
	return 0;
}