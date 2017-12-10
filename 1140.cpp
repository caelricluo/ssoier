#include<iostream>
#include<cstring>
#include<string>
char a[200],b[200];
using namespace std;
int main()
{
	cin>>a>>b;
	if (strstr(a,b)) {cout<<b<<" is substring of "<<a;return 0;}
	if (strstr(b,a)) {cout<<a<<" is substring of "<<b;return 0;}
	cout<<"No substring";
	return 0;
}