#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int a=0,b=0,c=0;
	for (int i=1;i<=n;i++)
	{
		int l;
		cin>>l;
		switch (l)
		{
			case 1 : a++;break;
			case 5 : b++;break;
			case 10 : c++;break;
		}
	}
	printf("%d\n%d\n%d",a,b,c);
	return 0;
}