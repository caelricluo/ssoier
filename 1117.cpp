

#include<iostream>
#include<cmath>
#include<cstdio>                     
using namespace std;
int main()
{
	bool d=1;
	int l,a[20000]={},n,t=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>l;
		for (int j=0;j<t;j++)
		{
			if (a[j]==l)
			{
				d=0;
			}
		}
		if (d)
		{
			cout<<l<<" ";
			a[t]=l;
			t++;
		}
		d=1;
	}
	return 0;
}