#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
char s[2501];
int main()
{
	int i,k,n=1;
	cin>>k>>s;
	int x=strlen(s);
	for (i=1;i<x;i++)
	{
		if (s[i]==s[i-1]) n+=1;
		else
		{
			if (n>=k) 
			{
				cout<<s[i-1];
				return 0; 
			}
			n=1;
		}
	}
	cout<<"No";
	return 0;
}