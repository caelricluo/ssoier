#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	string s;
	bool a=1;
	while (cin>>s)
	{
		int x=s.length();
		if (a==1) 
		{
			cout<<x;
			a=0;
		}
		else
		cout<<","<<x;
	}
	return 0;
}