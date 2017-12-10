#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char s[100000000];
int main()
{
	int t=0,qi,zh,qi1,zh1,i=0,j=0,maxn=0,minn=9999;
	gets(s);
	int x=strlen(s);
	for (i=0;i<x-1;i++)
	{
		if ((s[i]!=' ')&&(s[i]!=',')) t++;
		else
		if (t>0)
		{
			if (t>maxn)
			{
			maxn=t;
			qi=j;
			zh=i-1;
			}	
			t=0;
			j=i+1;
		}
	}
	for (i=qi;i<=zh;i++) cout<<s[i];
	return 0;
}