#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{

	string z;
	int zj=1,a[9]={};
	cin>>z;
	int x=z.length();
	z[x]='g';
	for (int i=1;i<=x;i++)
	{
		if (z[i]==z[i-1]) zj++;
		else
		{
			cout<<zj<<z[i-1];
			zj=1;
		} 
	}
	return 0;
}