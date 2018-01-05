

#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int b[100][100];
int main()
{
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
	int x=n*m;
	int g=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (a[i][j]==b[i][j]) g++;
		}
	}
	double y=(g*1.0/x)*100;
	printf("%.2lf",y);
	return 0;
}