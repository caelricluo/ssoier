

#include<iostream>
#include<cmath>
using namespace std;
long jc(int i)
{
	if (i==1) return 1;
	return i*jc(i-1);
}
int main()
{
	long l=0;
	int n;
	cin>>n;
	for (int i=n;i>=1;i--)
	   l+=jc(i);
	cout<<l;
	return 0;
}