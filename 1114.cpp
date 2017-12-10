#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int n,i1,i2;
	double a[301]={0},maxn=0,dmax=0,minn=99999,pj,ch,h=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]>maxn) {maxn=a[i];i1=i;}
		if (a[i]<minn) {minn=a[i];i2=i;}
	}
	for (int i=1;i<=n;i++)
	{
		if (i!=i1&&i!=i2) h+=a[i];
	}
	pj=h/(n-2);
	for (int i=1;i<=n;i++)
	{
		if (i!=i1&&i!=i2)
			if (fabs(a[i]-pj)>dmax) dmax=fabs(a[i]-pj);
	}
	printf("%.2lf %.2lf",pj,dmax);
	return 0;
}