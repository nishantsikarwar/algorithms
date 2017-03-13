#include <iostream>
#define n 10
using namespace std;
long long int nu=1,d=n,t=d; 

int main()
{

for(int i=1;i<=n;i++)
{
	d=d*(n-i)+nu;
	nu=t;
	t=d;
}
cout <<nu<<endl<<d<<endl;
return 0;
}
