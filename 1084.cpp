#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,i,k=1;
        cin>>a>>b;
for (i=1;i<=b;i++)
{
k*=a;
k=k%1000;
}
if (k>=100) cout<<k;
else if (k>=10) cout<<"0"<<k;
else cout <<"00"<<k;
return 0;
	return 0;
}