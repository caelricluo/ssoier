

#include<iostream>
using namespace std;
int fb(int n);
int main()
{
	int n;
	cin>>n;
	cout<<fb(n);
	return 0;
}
int fb(int n)
{
	if (n==1) return 0;
	if (n==2) return 1;
	else return fb(n-1)+fb(n-2);
}