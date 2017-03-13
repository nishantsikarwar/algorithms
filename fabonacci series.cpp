#include <iostream>
#define m 1000000007
using namespace std;
//long long int f=0;
inline long long int f(int n)
{

if (n==0||n==1)
return n;
 
	else
	{

	return (f((n+1)/2)*f(n/2)+f((n-1)/2)*f((n-2)/2))
	
	;
	
		
}

}
int main()
{
	int n;
	cin>>n;
	cout <<f(n);
	return 0;
}

