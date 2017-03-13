#include <iostream>
#include <cmath>
#define m 308910
using namespace std;

int main()
{
	 int b=18;
	
	//cout <<"enter the base"<<endl;
	//cin>>b;
//	cout <<"enter the exponent"<<endl;
//	cin>>e;
long long int ans =2;
long long int e;
for(long int i=2;i<=m;i++)
{
int s=0;e=i;
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
	ans++;
	cout <<mod<<endl;
	if (mod==18)
	{
	break;
}

}
	cout << " modulo is "<< ans;
	return 0;
}
