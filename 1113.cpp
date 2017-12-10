#include<iostream>
using namespace std;
int main()
{
	int i,x,z=0,maxn=0,a[100001]={};
	cin>>x;
	for (i=1;i<=x;i++) 
	{
		cin>>a[i];
		if (a[i]>maxn) maxn=a[i];
	}
	for (i=1;i<=x;i++)
	{
		if (a[i]<maxn) z+=a[i];
	}
	cout<<z;
	return 0;
}
