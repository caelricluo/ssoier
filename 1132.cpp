#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	string a,b;
	int a1=0,b1=0;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		a1=b1=0;
		cin>>a>>b;
		if (((a=="Rock")&&(b=="Paper"))||((a=="Scissors")&&(b=="Rock"))||((a=="Paper")&&(b=="Scissors")))  b1++;
		else if (a!=b) a1++;
		if (a1>b1) cout<<"Player1\n";
		if (a1<b1) cout<<"Player2\n";
		if (a1==b1) cout<<"Tie\n";
	}
	
}
