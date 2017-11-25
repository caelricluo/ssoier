#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t=0,n=0,x,i;
bool f=1;
for (i=1;i<=12;i++)
{
cin>>x;
t=t+300-x;
if (t<0){
cout<<"-"<<i<<endl;
f=0;
break;
}
if (t>=100){n=n+t/100;
t=t%100;
}
}
if (f==1) cout <<n*120+t<<endl;
return 0;	

}