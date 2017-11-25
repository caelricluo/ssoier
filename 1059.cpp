#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    double x=0,y,z;int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
       cin>>z;
       x+=z; 
    }
     y=x/n;
     printf("%.2lf",y);
     return 0;
}