
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ll(int n);
int main()
{
	int n;
	cin>>n;
	int y=0;
	for (int i=11;i<=n;i++) 
	{
		if (ll(i)) y++;
			
	}
	cout<<y;
	return 0;	
} 
int ll(int n)
{
	char s[100];
	sprintf(s,"%d",n);
	int x=strlen(s);
	for (int j=0;j<x/2;j++)
	{
		if (s[j]!=s[x-j-1]) return 0;
	}
	for (int i=2;i<=n/2;i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}