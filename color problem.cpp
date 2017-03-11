#include <iostream>
#include <cmath>
#define m 1000000007
using namespace std;

int main()
{
	long long int b;
	
	//cout <<"enter the base"<<endl;
	//cin>>b;
//	cout <<"enter the exponent"<<endl;
//	cin>>e;
long long int sum =0;
for(b=2;b<=1000000000;b++)
{
int e=1000000;int s=0;
	 long long  int r=1,mod=1;
	while (e>0)
	{
		int i=e%2;
		e=e/2;
		s++;
		if (i!=0)
		{
			r=b%m;
			for (int j=0;j<s-1;j++)
			{
				r=(r*r);
				r=r%m;
			}
		  mod=(mod*r)%m;	
		}
	}
	sum+=mod;
	sum =sum%m;
}
	cout << " modulo is "<< sum;
	return 0;
}
