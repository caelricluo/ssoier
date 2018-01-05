

#include<iostream>
using namespace std;
void ll(int n);
int main()
{
	int n;
	cin>>n;
	ll(n);
	return 0;	
} 
void ll(int n)
{
	int maxn=0;		int b=0;
	for (int i=2;i<=n-1;i++)
	{

		for (int j=1;j<=i;j++)
		{
			if (i%j==0) b++;
		}
			if (b==2)
			{
				int s=n-i;
				int a;
				for (int j=1;j<=s;j++)
				{
					if (s%j==0) a++;
				}
					if (a==2)
					{
						int y=s*i;
						if (maxn<=y) maxn=y;
					}
					a=0;
			}
		
		b=0;
		}
	cout<<maxn;
	return;
}