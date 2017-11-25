#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int m,n,z=0;
	cin>>m>>n;
	for (int i=m;i<=n;i++)
	{
		if (i%17==0)
		{
			z+=i;
		}
	}
	cout<<z;
	return 0;
}