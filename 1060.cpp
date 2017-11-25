#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double x=0,y;int n,z;
    cin>>n;
    for (int i=1;i<=n;i++)
   {
       cin>>y;
        x+=y;
   }
    y=x/n;
    printf("%.4lf\n",y);
	return 0;
}
