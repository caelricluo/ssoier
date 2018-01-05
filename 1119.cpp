

#include<iostream>
using namespace std;
int main()
{
	int a[5][5]={};
	for (int i=0;i<5;i++)
		for (int j=0;j<5;j++)
			cin>>a[i][j];
	int h,l;
	cin>>h>>l;
	for (int i=0;i<5;i++)
	{
		int ls;
		ls=a[h-1][i];
		a[h-1][i]=a[l-1][i];
		a[l-1][i]=ls;
	}
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}