#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char a[300],b[300];
int main()
{	
	cin>>a;
	int x=strlen(a);
	for (int i=0;i<(x-1);i++)
	{
		b[i]=(int)(a[i])+(int)(a[(i+1)]);
	}
	b[(x-1)]=(int)a[0]+(int) a[(x-1)];
	cout<<b;
}