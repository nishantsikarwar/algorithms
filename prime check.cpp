#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int n;int f=0;
	cin>>n;
	for (long int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
		f=1; cout <<i; break;
	}
	
	}
	if (f)
	cout <<"not prime";
	else cout <<"prime"; 
	return 0;	
}
