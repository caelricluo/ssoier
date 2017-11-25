#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int y[n];
	memset(y,0,sizeof(y));
	for (int i=1;i<=n;i++)
	{
		cin>>y[i];
	}
	int a=0,b=0,c=0,d=0;
	double a1=0,b1=0,c1=0,d1=0;
	for (int j=1;j<=n;j++)
	{
		if (y[j]<=18) a++;
		else if (y[j]<=35) b++;
		else if (y[j]<=60) c++;
		else d++;
	}
	a1=(double)a / n;
	b1=(double)b / n;
	c1=(double)c / n;
	d1=(double)d / n;
	printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%\n",a1*100,b1*100,c1*100,d1*100);
	return 0;
}
