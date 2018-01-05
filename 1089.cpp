

#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if (a==0)
	{
		cout<<0;
		return 0;
	}
	if (a<0) 
	{
		cout<<'-';
		a=abs(a);
	}
	char s[100];
	sprintf(s,"%d",a);
	int x=strlen(s);
	bool bj=1;
    for (int i=x-1;i>=0;i--)
    {
    	if (s[i]>'0'&&s[i]<='9') bj=0;
    	if (!bj) cout<<s[i];
    }
	return 0;
}