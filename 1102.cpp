#include<iostream>
using namespace std;
int main()
{
	int a,d,fff=0;
	cin>>a;
	int b[a];
	for (int i=1;i<=a;i++)
	{
		cin>>b[i];
	}
	cin>>d;
	for (int i=1;i<=a;i++)
	{
		if (b[i]==d) {
		fff++;}
	}
	cout<<fff;
	return 0;
}