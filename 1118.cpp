

#include<iostream>
#include<cmath>
#include<cstdio>                     
using namespace std;
int main()
{
	int a[100000][4]={},l1,l2,l3,l4,n,x,y,c,k;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>l1>>l2>>l3>>l4;
		a[i][0]=l1;
		a[i][1]=l2;
		a[i][2]=l3;
		a[i][3]=l4;
	}
	cin>>x>>y;
	for (int i=n-1;i>=0;i--)
	{
			c=a[i][0]+a[i][2];
			k=a[i][1]+a[i][3];
			if (x>=a[i][0]&&x<=c&&y>=a[i][1]&&y<=k)
			{
				cout<<i+1;
				return 0;
			}
	}
	cout<<-1;
	return 0;
}