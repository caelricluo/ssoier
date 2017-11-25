#include<iostream>
#include <cstdio>
int main()
{
using namespace std;
int a,b,c;
cin>>a>>b>>c;
for (int x=2;;x++)
{
if ((a%x==b%x)&&(a%x==c%x))
{
cout<<x<<endl;
return 0;
}

}
}