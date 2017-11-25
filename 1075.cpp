#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int m,n,t;
	cin>>m>>n;
	for (int i=1;i<=n;i++)
	{
		int l;
		cin>>l;
		if (l<=m)
		{
			m-=l;
		}
		else 
		{
			t++;
		}
	}
	cout<<t;
	return 0;
}