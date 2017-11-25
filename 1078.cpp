#include<iostream>
#include <cstdio>
int main()
{
using namespace std;
double a=1,b=1,c,i,j,s=0;
int n;
cin>>n;
for (i=1;i<=n;i++)
{
c=a+b;a=b;b=c;
s=s+(double)b/a;
}
printf("%.4lf",s);
return 0;
}