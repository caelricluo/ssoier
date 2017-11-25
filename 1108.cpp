#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n+1];
	int b[n+1];
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	int x=0;
	for (int i=1;i<=n;i++)
	{
		x+=a[i]*b[i];
	}
	cout<<x;
	return 0;
}