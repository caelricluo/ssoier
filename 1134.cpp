#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	bool b=0,d=0;
	int i; 
	char a[301];
    cin>>a;
	int x=strlen(a);
	for (i=0;i<x;i++)
	{
		if (((a[i]>=49)&&(a[i]<=57))||((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122))||(a[i]==95)) b=1;
		else {
		b=0; 
	}
	}
	i=0;
	if ((((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122))||(a[i]==95))) d=1;
	else d=0;
	if ((b==1)&&(d==1)) cout<<"yes";
	else cout<<"no";
	return 0;
