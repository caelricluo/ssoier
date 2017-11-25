#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n,z;
	cin>>n>>z;
	bool a[n+1];
	bool xx=1;
	memset(a,1,sizeof(a));
	for (int i=1;i<=z;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (j%i==0) a[j]=(!(a[j]));
		}
	}
	for (int i=1;i<=n;i++)
	{
		if (xx==1&&a[i]==0)
		{
			xx=0;
			cout<<i;
		}
		else 
		if (a[i]==0) 
		{
			cout<<","<<i;
		}
	}
	
	return 0;
}