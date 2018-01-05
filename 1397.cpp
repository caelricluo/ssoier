

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void ys(int a,int b,char d);
int main()
{
	int a,b;
	char d;
	cin>>a>>d>>b;
	ys(a,b,d);
	return 0;
}

void ys(int a,int b,char d)
{
	int jg;
	if (d=='+') jg=a+b;
	if (d=='-') jg=a-b;
	if (d=='*') jg=a*b;
	if (d=='/') jg=a/b;
	if (d=='%') jg=a%b;
	cout<<jg;
}