#include<iostream>
using namespace std;
bool pd(int n);
int main()
{
	int tj=0,n;
	cin>>n;
	for (int i=2;i<=n;i++)
	{
		if (pd(i)) tj++;
	}
	cout<<tj;
	return 0;
}
bool pd(int n)
{
	int z=1;
	for (int i=1;i*i<=n;i++)
	{
		if (n%i==0) z++;
	}
	if (z==2) return 1;
	else return 0;
}
