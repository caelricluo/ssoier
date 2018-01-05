

#include<iostream>
#include<cmath>
#include<cstdio>                     
using namespace std;
int main()
{
	int n,i,j,maxn=0;
	int a[10001]={0},b[10001]={0};
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]>maxn) {maxn=a[i];}
	}
	
	for (int i=0;i<=maxn;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (a[j]==i) b[i]++;
		}
	}
	for (int i=0;i<=maxn;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}