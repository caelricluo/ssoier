
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int FFF(int s);
int main()
{
	int a,minn=9999,maxn=0,d[26]={};
	char s[1000];
	cin>>s;
	int x=strlen(s);
	for (int i=0;i<x;i++)
	{
		d[s[i]-'a']++;
	}
	for (int i=0;i<26;i++)
	{
		if (d[i]!=0)
		{
			if (d[i]>maxn) maxn=d[i];
			if (d[i]<minn) minn=d[i];
		}
	}
	a=maxn-minn;
	bool bb=FFF(a);
	if (bb)
	{
		cout<<"Lucky Word"<<endl<<a;
	}
	else cout<<"No Answer\n0";
	return 0;
}
int FFF(int s)
{
	int d=0;
	if (s<2) return 0;
	for (int i=1;i<=s;i++)
		if (s%i==0) d++;
	if (d==2) return 1;
	else return 0;
}