#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
bool pd(int n);
int main()
{
	for (int i=6;i<=100;i+=2)
	{
		bool a=pd(i);
	}
	return 0;
}
bool pd(int n)
{
	int z=0,zz=0;
	for (int i=2;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			if (i%j==0) z+=1;
		}
		if (z==2)
		{
			for (int ii=2;ii<=n;ii++)
			{
				for (int jj=1;jj<=ii;jj++)
				{
					if (ii%jj==0) zz+=1;
				}
				if (zz==2)
				{
					if (i+ii==n) 
					{
						cout<<n<<"="<<i<<"+"<<ii<<endl;
						return 0;
					} 
				}
				zz=0;
			}
		}
		z=0;
	}
}