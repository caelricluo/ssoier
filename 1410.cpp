

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ll(int n);
int main()
{
	bool bj=1;
	int n,m;
	cin>>n>>m;
	int y=0;
	for (int i=n;i<=m;i++) 
	{
		int maxn=0;
		for (int j=2;j<=i;j++)	
		{
			if (i%j==0)
				if (ll(j)) 
					if (j>maxn) maxn=j;	
		}
		if (bj) 
		{
			cout<<maxn;
			bj=0;
		}
		else cout<<","<<maxn;
	}
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