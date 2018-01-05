

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
double akm(int n,int x);
int main()
{
	int x,n;
	cin>>n>>x;
	double a=akm(n,x);
	printf("%.2lf",a);
	return 0;
}
double akm(int n,int x)
{
	if (n==0)
	{
		return 1;
	}
	if (n==1)
	{
		return 2*x;
	}
	if (n>1)
	{
		return 2*x*akm(n-1,x)-2*(n-1)*akm(n-2,x);
	}
}