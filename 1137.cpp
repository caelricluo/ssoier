#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	char a;
	cin>>s;
	int x=s.length();
	for (int i=0;i<x;i++)
	{
		if (s[i]=='X') s[i]='A';
		else
		if (s[i]=='Y') s[i]='B';
		else
		if (s[i]=='Z') s[i]='C';
		else
		if (s[i]=='x') s[i]='a';
		else
		if (s[i]=='y') s[i]='b';
		else
		if (s[i]=='z') s[i]='c';
		else
		s[i]+=3;
	}
	for (int i=0;i<x/2;i++)
	{
		a=s[i];
		s[i]=s[x-i-1];
		s[x-i-1]=a;
	}
	for (int i=0;i<x;i++)
	{
		if (s[i]>='a'&&s[i]<='z') s[i]-=32;
		else 
		if (s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	cout<<s;
	return 0;
}