#include<iostream>
using namespace std;
bool pd(int a,int b);
int main()
{
	for (int i=1;i<=1000;i++)
	{
		for (int j=1;j<=1000;j++)
	{
		if (i!=j) if (pd(i,j)) {cout<<i<<" "<<j;return 0;}
	}
	}
	return 0;
}
bool pd(int a,int b)
{
	int a1=0,b1=0;
	for (int i=1;i<=a-1;i++)
		if (a%i==0) a1+=i;
	for (int i=1;i<=b-1;i++)
		if (b%i==0) b1+=i;
	if (a1==b&&b1==a) return 1;
	else return 0;
