#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double n,a=0,b;
	int i=0;
	cin>>n;
	b=n;
	while (i<10)
	{
	    i++;
		b/=2;
		a+=b*2;
	}
	a-=b*2;
	a+=n;
	cout<<a<<"\n"<<b;
	return 0;
}