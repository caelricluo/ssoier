#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
bool pd(int n);
int main()
{
	for (int i=100;i<=999;i++)
	{
		if (pd(i)) cout<<i<<endl;
	}
	return 0;
}
bool pd(int n)
{
	int z=0;
	for (int i=1;i<=n;i++)
	{
		if (n%i==0) z++;
	}
	if (z!=2) return 0; 
		char x[100001];
		sprintf(x,"%d",n);
		int d=strlen(x);
		for (int i=0;i<=d/2;i++)
			if (x[i]!=x[d-i-1]) return 0;
	return 1;
}