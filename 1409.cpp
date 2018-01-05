

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ll(int n);
int main()
{
	int n,m;
	cin>>n>>m;
	int y=0;
	for (int i=n;i<=m;i++) 
	{
		if (ll(i)) y++;
			
	}
	cout<<y;
	return 0;	
} 
int ll(int n)
{
	if (n<2) return 0;
	for (int i=2;i<=n/2;i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}