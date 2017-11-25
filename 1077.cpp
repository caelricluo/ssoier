#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n,j=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int a=0,b=0,c=0,d=0,s=0;
		cin>>s;
		a=s/1000;
		b=s%1000/100;
		c=s%1000%100/10;
		d=s%10;
		if((d-a-b-c)>0)
		{
			j++;
		}
	}
	cout<<j;
	return 0;
}
