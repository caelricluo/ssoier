

#include<iostream>
using namespace std;
int fb(int n);
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		cout<<fb(x)<<endl;;
	}
	return 0;
}
int fb(int n)
{
	if (n==1) return 1;
	if (n==2) return 1;
	else return fb(n-1)+fb(n-2);
}