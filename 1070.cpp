#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int x,n;
    double s;
    cin>>x>>n;
    s=(double) x;
    for (int i=1;i<=n;i++)
    {
    	s*=1.001;
	}
	printf("%.4lf\n",s);
	return 0;
}