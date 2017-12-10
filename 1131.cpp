#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int zm[27][2];
int main()
{
	double kill;
	string a,b;
	cin>>kill>>a>>b;
	double z;
	int x=a.length();
	int fff=0;
	for (int i=0;i<x;i++)
	{
		if (a[i]==b[i]) fff++;
	}
	z=((double) fff)/((double) x);
    if (z>=kill) cout<<"yes";
    else cout<<"no";
}