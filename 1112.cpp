#include<iostream>
using namespace std;
int main()
{
	int i,x,maxn=0,minn=999999,a;
	cin>>x;
	for (i=1;i<=x;i++) 
	{
		cin>>a;
		if (a>maxn) maxn=a;
		if (a<minn) minn=a;
	}
	cout<<maxn-minn;
	return 0;
}