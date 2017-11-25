#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n,t=0,c=0;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		if ((a<=140)&&(a>=90)&&(b<=90)&&(b>=60))
		{
			c++;
			if (c>t) 
			{
				t=c;
			}
		}
		else c=0;
	}
	cout<<t;
	return 0;
}