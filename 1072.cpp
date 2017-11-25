#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long a,b,n;
double x,y;
cin>>n;
cin>>a>>b;
x=b/(a/1.0);
for (int i=2;i<=n;i++)
{
cin>>a>>b;
y=b/(a/1.0);
if (y-x>0.05) cout<<"better\n";
else
if (x-y>0.05) cout<<"worse\n";
else cout<<"same\n";
}
	return 0;
}