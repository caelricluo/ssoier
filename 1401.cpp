

#include<iostream>
#include<cstdio>
using namespace std;
bool ll(int x);
int n,m,k;
int b[1000000]={-1};
int main()
{
memset(b,-1,sizeof(b));
	k=0;
	int y=0;
	cin>>m>>n;
	for (int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if (!ll(x))
		{
			if (k<m) 
			{
				b[k]=x;
				k++;
				y++;
			}
			else 
			{
				b[0]=x;
				k=1;
				y++;
			}
		}
	}
	cout<<y;
	return 0;	
} 
bool ll(int x)
{
	for (int i=0;i<m;i++) 
		if (b[i]==x) return 1;
	return 0;
}