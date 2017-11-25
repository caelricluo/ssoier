#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int  n=0,a=0,b=0;
	int i=1;
	cin>>n;
	i=n;
	while (i!=1)
	{
	    if (i%2==1)
	    {
	    	cout<<i<<"*3+1="<<i*3+1<<endl;
	    	i=i*3+1;
	    }
	    else
	    {
	    	cout<<i<<"/2="<<i/2<<endl;
	    	i=i/2;
	    }
	}
	cout<<"End";
	return 0;
}