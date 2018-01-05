

#include<iostream>
#include<cmath>
#include<cstdio>  
#include<cstring>                   
using namespace std;
int fff(string a,float b,bool c);
int main()
{
	int n,x=0;
	string a;
	float b;
	bool c;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		x+=fff(a,b,c);
	}
	cout<<x;
	return 0;
}
int fff(string a,float b,bool c)
{
	if (b>=37.5&&c==1)
	{
		cout<<a<<endl;
		return 1;
	}
	else return 0;
}