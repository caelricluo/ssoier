#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	char a[32];
	gets(a);
	int x=strlen(a);
	if (((a[x-2]=='e')&&(a[x-1]=='r'))||((a[x-2]=='l')&&(a[x-1]=='y')))
	{
		a[x-2]='\0';
		a[x-1]='\0';
	}
	else
	if ((a[x-3]=='i')&&(a[x-2]=='n')&&(a[x-1]=='g'))
	{
		a[x-3]='\0';
		a[x-2]='\0';
		a[x-1]='\0';
	}
	cout<<a;
	return 0;
}