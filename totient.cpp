#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t=0;
int tot(int n)
{
	if(n%2!=0)
{
		int i=1,j=0,l=0;
	for(i;i<n;i++)
	for(j=i;l=j%n;j+=i )
	if(l==1)
	t++;
	return t;
}
else 
{
	n=n/2;
	if(n%2==0)
	return 2*tot(n);
	else return tot(n);
	
}
}

int main() 
{
int n;
cin>>n;
cout <<tot(n);	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

