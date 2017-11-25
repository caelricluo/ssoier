#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double s=0;
	double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double b[10];
	for (int i=0;i<=9;i++)
	{
		cin>>b[i];
		s+=a[i]*b[i];
	}
	cout<<s;
}