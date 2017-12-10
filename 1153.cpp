#include<iostream>
using namespace std;
bool pd(long long n);
int main()
{
	for (long long i=11;i<=99;i++)
	{
		if (pd(i)) cout<<i<<endl;
	}
	return 0;
}
bool pd(long long n)
{
	int a,b,c;
	a=n/10;
	b=n%10;
	c=b*10+a;
	int z=0;
	for (long long i=1;i<=n;i++)
	{
		if (n%i==0) z++;
	}
	if (z==2) 
	{
	z=0;
	for (long long i=1;i<=c;i++)
	{
		if (c%i==0) z++;
	}
	if (z==2) return 1;
}
	return 0;
}