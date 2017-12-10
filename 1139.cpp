#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	string s[256];
	int g;
	cin>>g;
	for (int i=0;i<g;i++)
	{
		cin>>s[i];
		for (int j=0;j<s[i].length();j++)
		{
			if (s[i][j]>='A'&&s[i][j]<='Z') s[i][j]+=32;
		}
		if (s[i][0]>='a'&&s[i][0]<='z') s[i][0]-=32;
		cout<<s[i]<<endl;;
	}
	
	return 0;
}
