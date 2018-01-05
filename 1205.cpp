

#include<iostream>
#include<cstdio>
using namespace std;
void Eden(int n,char a,char c,char b);
int main()
{
	int n;
	char a,b,c;
	cin>>n>>a>>c>>b;
	Eden(n,a,c,b);
	return 0;	
} 
void Eden(int n,char a,char c,char b)
{
	if (n==0) return;
	Eden(n-1,a,b,c);
	printf("%c->%d->%c\n",a,n,c);
	Eden(n-1,b,c,a);
}