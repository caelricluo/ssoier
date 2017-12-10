#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	bool b=0,d=0;
	char a[301],x[301];
    gets(a);
	int fff;fff=strlen(a);
	for (int i=0;i<fff;i++)
	{
		if (((a[i]>=65)&&(a[i]<=89))||((a[i]>=97)&&(a[i]<=121))) a[i]=a[i]+1;
		else if (a[i]=='z') a[i]='a';
		else if (a[i]=='Z') a[i]='A';
		cout<<a[i];
	}
	
	return 0;
}