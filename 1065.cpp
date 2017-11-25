#include<iostream>
#include<cstdio>
using namespace std;
int main() 
{
	int n,m,z=0;
	cin>>m>>n;
	for (int i=m;i<=n;i++)
	{
		if (i%2==1) z+=i;
	}
	cout<<z;
	return 0;
}