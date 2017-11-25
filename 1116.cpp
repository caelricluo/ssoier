#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	memset(a,0,sizeof(a));
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int i=0;int ls=0,lls=0;
	for (int j=1;j<=n;j++)
	{
		if (a[j]==lls) ls++;
		else {
		lls=a[j];ls=0;}
		if (ls>i) i=ls;
	}
	cout<<i+1;
	return 0;
}