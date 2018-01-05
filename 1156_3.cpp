#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
double arctanx(double x);
int main()
{
	double a=6*arctanx(1.0/sqrt(3));
	printf("%.10lf",a);
	return 0;
}
double arctanx(double x)
{
	double j=1.0,b,y=0.0,a=x;
	int i=1,z=0,m;
	while (fabs(a/j)>=1e-6)
	{
		y+=a/j;
		a*=(-1)*x*x; 
		j+=2.0;
	}
	return y;
}