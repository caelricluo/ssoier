

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
double akm(double x,double n);
int main()
{
	double x,n;
	cin>>x>>n;
	double a=akm(x,n);
	printf("%.2lf",a);
	return 0;
}
double akm(double x,double n)
{
	if (n==1)
	{
		return x/(x+1);
	}
	else
	{
		return x/(n+akm(x,n-1));
	}
}