

#include<iostream>
using namespace std;
int qh(int n);
int main()
{
	int n;
	cin>>n;
	cout<<qh(n);
	return 0;
}
int qh(int n)
{
	if (n==1) return 1;
	else return n+qh(n-1);
}