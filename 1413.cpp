

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ll(int n,int j);
int main()
{
	int p,q,r;
	cin>>p>>q>>r;
	for (int i=2;i<=40;i++)
	{
		int a,b,c;
		a=ll(p,i);
		b=ll(q,i);
		c=ll(r,i);
		if (a*b==c)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;	
} 
int ll(int n,int j)
{
	int k=0;
	int t=0;
	while(n!=-1)
	{
		if (n<10)
		{
			int x=1;
			for (int i=1;i<=k;i++) x=j*x;
			t+=n*x;
			n=-1;
		}
		else
		{
			int y=n%10;
			n/=10;
			int x=1;
			for (int i=1;i<=k;i++) x=j*x;
			t+=y*x;
			k++;
		}
	}
	return t;
}