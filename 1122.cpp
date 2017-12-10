#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int main(){
	int a[6][6];
	for (int i=1;i<=5;i++)
		for (int j=1;j<=5;j++)
			cin>>a[i][j];
	for (int i=1;i<=5;i++)
		for (int j=1;j<=5;j++)
		{
			if ((a[i][j]>=a[i][1])&&(a[i][j]>=a[i][2])&&(a[i][j]>=a[i][4])&&(a[i][j]>=a[i][5])
			&&(a[i][j]<=a[1][j])&&(a[i][j]<=a[2][j])&&(a[i][j]<=a[3][j])&&(a[i][j]<=a[4][j])&&
			(a[i][j]<=a[5][j]))
			{
				cout<<i<<" "<<j<<" "<<a[i][j];
				return 0;
			}
		}
		cout<<"not found";
	return 0;
}