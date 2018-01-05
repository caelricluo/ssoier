
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
bool pd(int n);
int main()
{
	bool bj=1;
	int n,m;
	cin>>n>>m;
	for (int i=n;i<=m;i++)
	{
		char s[100],s1[100];
		sprintf(s,"%d",i);
		int k=0;
		int i1;
		int x=strlen(s);
		for (int j=x-1;j>=0;j--)
		{
			s1[k]=s[j];
			k++;
		}
		sscanf(s1,"%d",&i1);
		if (pd(i)&&pd(i1))
		{
			if (bj) 
			{
				cout<<i;
				bj=0;
			}
			else
			cout<<','<<i;
		}
	}
	if (bj) cout<<"No";
	return 0;
}
bool pd(int n)
{
	if (n<2) return 0;
	for (int i=2;i<n/2;i++)
		if (n%i==0) return 0;
	return 1;
}