#include<bits/stdc++.h>
using namespace std;
void ef(int k);
void print();
bool bj[1000];
char a[1000],n[1000];
int r;
int main()
{
	cin>>n+1;
	r=strlen(n+1);
	ef(1);
	return 0;
}
void ef(int k)
{
	for (int i=1;i<=r;i++)
	{
		if (!(bj[i]))
		{
			bj[i]=1;
			a[k]=n[i];
			if (k==r) print();
			else
			ef(k+1);
			bj[i]=0;
		}
			
	}
}
void print()
{
	for (int i=1;i<=r;i++)
		cout<<a[i];
	cout<<endl;
}

