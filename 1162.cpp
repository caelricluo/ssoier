

#include<iostream>
#include<cstring>
using namespace std;
void fb();
int main()
{
	fb();
	return 0;
}
void fb()
{
	char a;
	cin>>a;
	if (a=='!')
	{
		return;
	}
	else
	{
		fb();
		cout<<a;
		return;
	}
}