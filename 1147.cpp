#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	int s;
	string name[101];
	int code[101];
	int max=0;
	string maxn;
	cin>>s;
	for (int i=0;i<s;i++)
	{
		cin>>code[i]>>name[i];
		if (code[i]>max)
		{
			max=code[i];
			maxn=name[i];
		}
	}
	cout<<maxn;
	return 0;
}