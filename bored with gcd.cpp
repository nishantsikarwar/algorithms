#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define m 1000000007
using namespace std;
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long long  int a=1,s=0,j=0,k=1,c=0;
	for(int i=1;i<=12;i++)
	{
		a=a*10;
		j=(a*(a-1))/2;
		j=j%m;
		s+=j;		
		c=a/4;
		k=(2*c*(c+1))%m;
		s=s-k+2*c;
			s=s%m;
			cout <<s<<" "<<a<<endl;
		}	
	
    return 0;
}

