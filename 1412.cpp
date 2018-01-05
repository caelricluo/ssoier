

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
bool pd(int n);
int main()
{
	int a=0,b=0;
	for (int i=1;i<=1000;i++)
	{
		if (pd(i)) a++;
		else b++;
	}
	cout<<a<<' '<<b;
	return 0;
}
bool pd(int n)
{
	int a=0,b=0;
	while(n!=0)
	{
		if (n%2==1) a++;
		else b++;
		n/=2;
	}
	return a>b?1:0;
}