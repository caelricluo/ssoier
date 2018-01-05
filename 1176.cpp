

#include<bits/stdc++.h>
using namespace std;
struct sd
{
	char x[100];
	float c;
};
int main()
{
	sd xs[10000];
	int n,k,i,j;
	cin>>n>>k;
	for (i=1;i<=n;i++)
		cin>>xs[i].x>>xs[i].c;
	for (i=1;i<n;i++)
		for (j=1;j<n;j++)
			if (xs[j].c<xs[j+1].c)
				{
					swap(xs[j].c,xs[j+1].c);
					swap(xs[j].x,xs[j+1].x);
				}
	printf("%s %g",xs[k].x,xs[k].c);
	return 0;
}