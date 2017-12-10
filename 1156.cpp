#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
double arctanx(double x);
int main()
{
	double a=6*arctanx((1.0*1)/sqrt(3));
	printf("%.10lf",a);
	return 0;
}
double arctanx(double x)
{
	double a=x,b=1.0,ls=x;
	bool bj=0;
	int t=1;
	while (fabs(b)>=1e-6)
	{
		t+=2;
		for (int i=t-1;i<=t;i++) ls*=x;
		ls*=-1;
		b=ls/t;
		a+=b;
	}
	return a;
}