

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void fb(int a);
int a;
int main()
{
	cin>>a;
	fb(a);
	return 0;
}
void fb(int a)
{
	if (a>=10)
	{
		int b=a%10;
		cout<<b;
		fb(a/10);
		return;
	} 
	else
	{
		cout<<a;
		return;
	}
}