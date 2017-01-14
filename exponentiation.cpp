#include <iostream>
using namespace std;
main()
{
	long long int n;
	cout <<"enter the no of terms";
	cin>>n;
	long long int m = 1000000007,s=4;
	for (int i=2;i<=10000000;i++)
{
		long long int f=(i*i);
	for (int j=1;j<n;j++)
	{
		 f = (f*f)%m;
		 s=(s+f)%m;
 	}
 	cout <<  s  <<   "||" << i    <<endl;
 }
	
}
