#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,t,k=1;
        cin>>k;a=b=1;
if ((k==1)||(k==2)) cout<<1;
else
{for (int i=3;i<=k;i++)
{t=a+b;a=b;b=t;}
cout<<t;
}

	return 0;
}