#include <iostream>
#include <cmath>
using namespace std;
 inline int F(int n )
{
	if (n==0||n==1)
	return n;
	else return F(n-1)+F(n-2);
	
}

int main()
{
	
int i;
cin>>i;
cout <<F(i)*F(i);
//long long double s=0;
//for (int i=1;i<30;i++)
//s+=F(i)*F(i);	
//cout <<s;
return 0;	
}
