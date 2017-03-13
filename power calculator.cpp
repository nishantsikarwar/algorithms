#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int b,e,p[1000];
	cout <<"enter the base "<<endl;
	cin>>b;
	cout <<"enter the exponent"<<endl;
	cin>>e;
	int s=b;
	for (int i=999;i>=0;i--)
	{
		p[i]=s%10;
		s=s/10;
	}
	for (int i=0;i<e;i++)
	{
		int n=b,d=1;
	while (n)
{
	
	int a=(n%10)*d, c=0,r=0,pr=0;
	for (int j=999;j>=0;j--)
	{
	   pr=p[j]*a;
	   r=pr%10;
	    p[j]=r+c;
	   c=pr/10;;
	  
	}
	n=n/10;
	d=d*10;
	
}

}
   int i=0;
for (i;i<1000;i++)
{
if (p[i])
break;
}
while (i<1000)
{
cout <<p[i];
i++;	
}

}

