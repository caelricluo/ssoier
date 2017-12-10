#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
bool a[100000001];
int main(){
	
	int n,l,s=0;
	cin>>n>>l;
	memset(a,1,sizeof(a));
	for (int i=1;i<=l;i++)
	{
		int x,y;
		cin>>x>>y;
		for (int j=x;j<=y;j++)
		{
			a[j]=0; 
		} 
	}
	for (int i=0;i<=n;i++)
	{
		if (a[i]) s++;
	}
	cout<<s;
	return 0;
}