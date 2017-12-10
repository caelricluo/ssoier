#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[101]={};
	cin>>a;
	int i=strlen(a);
	for (int n=0;n<=i/2;n++)
	{
		if (a[n]!=a[i-n-1])
		{
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}