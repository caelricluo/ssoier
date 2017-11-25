#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,n,t=1;
        cin>>a>>b>>n;
for (int i=1;i<=n;i++)
{
a=a*10;
t=a/b;
a=a%b;
}
cout<<t;
	return 0;
}
