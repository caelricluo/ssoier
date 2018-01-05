
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void ll(string s1,string s2);
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int l=s1.length();
	for (int i=0;i<l;i++)
		if (s1[i]>='A'&&s1[i]<='Z') s1[i]+=32;
	l=s2.length();
	for (int i=0;i<l;i++)
		if (s2[i]>='A'&&s2[i]<='Z') s2[i]+=32;
	s2[l]=' ';
	ll(s1,s2);
	return 0;	
} 
void ll(string s1,string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	int j=0,t=0,k=0;
	for (int i=0;i<=l2-l1;i++)
	{
		for (j=0;j<l1;j++)
		{
			if (s1[j]!=s2[i+j]) break;
			if (i>0&&s2[i-1]!=' ') break;
		}
		if (j==l1&&s2[i+l1]==' ')
		if (t==0)
		{
			k=i;
			t++;
		}
		else 
		{
			t++;
		}
	}
	if (t==0) cout<<-1;
	else cout<<t<<' '<<k;
}