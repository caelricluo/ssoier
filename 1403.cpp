

#include<iostream>
using namespace std;
void ll();
int main()
{
	ll();
	return 0;	
} 
void ll()
{
	int n;
	cin>>n;
	for (int i=2;i<=n;i++)
	{
		int a=0;
		for (int m=1;m<=i;m++) 
			if (i%m==0) 
				a++;
		if (a==2)
		{
			int j=i+2;
				int b=0;
				for (int m=1;m<=j;m++) 
					if (j%m==0) 
						b++;
				if (b==2)
				{
					cout<<i<<' '<<j<<endl; 
				}
			}
	}
	return;
}