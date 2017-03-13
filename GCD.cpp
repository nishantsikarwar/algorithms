#include <iostream>
using namespace std;
int gcd (int a,int b)
{
	if (a==b)
	return a;
	else if (a>b)
	{ 	
	a=a-b;
	return gcd(a,b);
        }
	else 
	{
		b=b-a;
		return gcd(a,b);
	} 
}
main()
{
	int a,b;
	cout <<"enter the first no"<<endl;
	cin>>a;
	cout <<"enter the second no"<<endl;
	cin>>b;
	cout <<gcd(a,b);
	
}
