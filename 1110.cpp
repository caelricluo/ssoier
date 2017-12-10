#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int a[100000001];
int main(){
	
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x;cin>>x;
	for (int i=1;i<=n;i++)
	{
		if (a[i]==x) {
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}