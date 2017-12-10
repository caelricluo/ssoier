#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char a[1000];
	gets(a);
	int x;
	x=strlen(a);
	int f=0;
	for (int i=0;i<x;i++)
	{
		if ((((int)a[i])>=48)&&(((int)a[i])<=57)) f++;
	}
	cout<<f;
	
}
