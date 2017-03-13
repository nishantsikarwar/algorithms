#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
#define e (float)1/3
long  int s=0;
int mcub (int n)
{
	if(n==1||n==0)
	return n;
	else
	{
		int s;
		s=pow(n,e);
		s=mcub(n-s*s*s)+1;
		return s;
	}
}

int main() 
{
int n;
cin>>n;
 //for(int i=1;i<=n;i++)
 //{
 //	s+=mcub(i);
 //}
 //cout<<s;
cout <<mcub(n);
	return 0;
}
