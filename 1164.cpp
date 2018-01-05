

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a;
void digit(int n,int k);
int main()
{
	int k,n;
	cin>>n>>k;
	a=0;
	digit(n,k);
	return 0;
}
void digit(int n,int k)
{
	if (a==k-1)
	{
		cout<<n%10;
		return;
	}
	else
	{
		a++;
		digit(n/10,k);
		return;
	}
}