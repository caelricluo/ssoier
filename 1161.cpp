

#include<iostream>
using namespace std;
void ll(int n,int x);
char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{
	int n,x;
	cin>>n>>x;
	ll(n,x);
	return 0;	
} 
void ll(int n,int x)
{
	if (n==0)
	{
		return;
	} 
	else
	{
		int d=n%x;
		n/=x;
		ll(n,x);
		cout<<a[d];
		return;
	}
} 

