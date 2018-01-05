

#include<iostream>
#include<cmath>
#include<cstdio>                     
using namespace std;
int fff(int d);
int main()
{
	double e;
	int a,b=0;
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		b+=fff(a);
	}
	e=b*1.0*0.1;
	printf("%.1lf",e);
	return 0;
}
int fff(int d)
{
	int l=0;
	if (d>70&&d%70!=0)
		l=d/70+1;
	else
		if (d<=70) l=1;
	else l=d/70; 
	return l;
}