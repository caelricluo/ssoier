#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() 
{
	int n,t=0,c=0;
#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main()  
{  
    int n;  
    float sum;  
  
    cin >> n;  
  
    sum = 0;  
    for(int i=1; i<=n; i++) {  
        if(i % 2 == 1)  
            sum += 1.0 / i;  
        else  
            sum -= 1.0 / i;  
    }  
  
    cout << fixed << setprecision(4) << sum << endl;  
  
    return 0;  
}  