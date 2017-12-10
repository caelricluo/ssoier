#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	bool b=0,d=0;
	char a[301],x[301];
    cin>>a;
	int fff;fff=strlen(a);
	for (int i=0;i<fff;i++)
	{
		if (a[i]=='A') x[i]='T';
		if (a[i]=='T') x[i]='A';
		if (a[i]=='G') x[i]='C';
		if (a[i]=='C') x[i]='G';cout<<x[i];
	}
	
	return 0;
}