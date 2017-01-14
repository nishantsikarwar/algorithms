#include <iostream>
#include <cmath>
using namespace std;
main()
{
	 int b,e,s=0;
	 long long  int r=1,m=1000000007,mod=1;
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
	
	
}
