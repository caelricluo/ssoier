

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int a[10001],n,b,s=0;
	cin>>n;
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				s++;
			}
		}
	}
	cout<<s;
	return 0;
}