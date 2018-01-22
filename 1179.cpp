#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
struct student
{
	int z,h,y;
};
int main()
{
	student x[10000];
	string Jeb="I'm so clever!";
	int n,k,i,j,l;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>k>>j>>l;
		x[i].h=i;
		x[i].z=k+j+l;
		x[i].y=k;
	}
	for (i=1;i<n;i++)
		for (j=1;j<n;j++)
			if (x[j].z<x[j+1].z)
				{
					swap(x[j],x[j+1]);
				}
	for (i=1;i<n;i++)
		for (j=1;j<n;j++)
		 	if (x[j].z==x[j+1].z)
			{
				if (x[j].y<x[j+1].y)
				{
					swap(x[j],x[j+1]);
				}
			}
	for (i=1;i<=5;i++)
	{
		cout<<x[i].h<<' '<<x[i].z<<endl; 
	}
	return 0;
}