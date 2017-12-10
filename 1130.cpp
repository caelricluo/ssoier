#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int zm[27][2];
int main()
{
	string a;
	char z;
	cin>>a;
	int fff=0;
	int x=a.length();
	for (int i=0;i<x;i++)
	{
		z=a[i];
		for (int j=0;j<x;j++)
		{
		   if (a[j]==z) fff++; 
		}
		if (fff==1) { 
		    cout<<z;
		    return 0;
		}      
		fff=0;
	}
	cout<<"no";
}