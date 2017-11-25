#include<iostream>
#include<cstdio>
using namespace std;
int a,b,s=1;
int main()
{
cin>>a>>b;
if(b==0){
cout<<"Monday";
return 0;

}

for(int i=1;i<=b;i++)
{
s*=a;
s%=7;
}
if(s==1)cout<<"Monday";
else if(s==2)cout<<"Tuesday";
else if(s==3)cout<<"Wednesday";
else if(s==4)cout<<"Thursday";
else if(s==5)cout<<"Friday";
else if(s==6)cout<<"Saturday";
else cout<<"Sunday";
}