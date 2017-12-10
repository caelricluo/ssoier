#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	char a;
	getline(cin,s);
	int x=s.length();
	for (int i=0;i<x;i++)
	{
		if (s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	cout<<s;
	return 0;
}