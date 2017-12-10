#include<iostream>
#include<cstdio>
using namespace std;
int maxn(int a,int b,int c);
int main()
{
	double m;
	int a,b,c;
	cin>>a>>b>>c;
	m=1.0*maxn(a,b,c)/(maxn(a+b,b,c)*maxn(a,b,b+c));
	printf("%.3lf",m);
	return 0;
}
int maxn(int a,int b,int c)
{
	int dmax=-1;
	if (a>dmax) dmax=a;
	if (b>dmax) dmax=b;
	if (c>dmax) dmax=c;
	return dmax;
}