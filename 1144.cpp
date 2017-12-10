#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char s[501];
int main()
{
	gets(s);
	int x=strlen(s); s[x]=' ';
	int i,j,t=0;
	string s1;
	for (i=0;i<=x;i++)
	{
		if (((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z')))
		{
			s1[t]=s[i];
			t++;
		}
		else
		{
			if (t>0)
			{
				for (j=t-1;j>=0;j--) cout<<s1[j];
			}
			s1="";
			t=0;
			cout<<s[i];
		}
	}
	return 0;
}