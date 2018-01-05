

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long  n,k;
	cin>>n>>k;
	if (n%19==0&&k*3<=n) cout<<"YES";
	else cout<<"NO";
	return 0;
}