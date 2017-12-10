#include<iostream>
using namespace std;
bool pd(long long n);
int main()
{
	int n;
	cin>>n;
	for (int i=2;i<=n;i++)
		if (pd(i)) cout<<i<<endl;
	return 0;
}
bool pd(long long n)
{
	int z=1,zz=0;long long i;
	for (i=2;i<=n-1;i++)
	{
		if (n%i==0)
		{
			z+=i;
		}
	}
	if (z==n) return 1;
	else return 0;
}