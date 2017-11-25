#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,m=0;
	int fff[11];
	for (int i=1;i<=10;i++)
	{
		cin>>fff[i];
	}
	cin>>n;
	n+=30;
	for (int i=1;i<=10;i++)
	{
		if (fff[i]<=n) m++;
	}
	cout<<m;
}