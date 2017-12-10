#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int a[8][3];
int main(){       
	for (int i=1;i<=7;i++)
	{
		for (int j=1;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=7;i++)
	{
		int x;
		x=a[i][1]+a[i][2];
		if (x>8) {
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}