

#include<iostream>
using namespace std;
int FFF(int x)
{
	return (1+x)*x/2;
}
int main()
{
	int n;
	cin>>n;
	for (int i=1;;i++)
	{
		int sum=FFF(i)-n;
		if (sum%3==0&&sum>0)
		{
			cout<<sum/3<<" "<<i;
			return 0;
		}
	}
}