#include <iostream>
#include <cmath>
#define m 100086841
using namespace std;

int main()
{
	long long int b,e;
	int s=0;
	 long long  int r=1,mod=1;
	cout <<"enter the base"<<endl;
	cin>>b;
	cout <<"enter the exponent"<<endl;
	cin>>e;
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
	cout << " modulo is "<< mod;
	return 0;
}
