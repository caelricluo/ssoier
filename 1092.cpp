

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double x=1.0;
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		long long y=1;
		for (int j=2;j<=i;j++) y*=j;
		x+=1.0/y;
	}
	printf("%.10lf",x);
	return 0;
}

