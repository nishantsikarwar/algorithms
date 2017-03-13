#include <iostream>
using namespace std;
int main()
{
	int n,r=0;
	cin>>n;
	int f[10000];
	for (int i=0;i<10000;i++)
	{
		if (i<9999)
		f[i]=0;
		else f[i]=1;
	}
		for (int i=2;i<=n;i++)
{
		int c=0;
	for (int j=9999;j>=0;j--)
	{
			r=i*f[j];
		r=r+c;		
		f[j]=r%10;
		c=r/10;
	}
}
int i=0;
for (i;i<10000;i++)
if (f[i])
break;
while (i<10000)
{
cout <<f[i];
i++;	
}

}
