#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n,m,j=0;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		int l;
		cin>>l;
		if (l==m) j++;
	}
	cout<<j;
	return 0;
}