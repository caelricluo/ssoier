#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n,z=0;
	double p=0,d=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
			int l=0;
			cin>>l;
			z+=l;
		
	}
	d=(double) z;
	p=d/n;
	cout<<z;
	printf(" %.5lf",p);
	return 0;
}