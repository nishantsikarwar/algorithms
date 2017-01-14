#include <iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	long long int m=n,s=0,c=0;
	while (m!=4)
	{
		m=m%(1000000007);
		m=m*m;
		s=(s+m)%(1000000007);
		c++;
	}
	cout <<c-1<<endl<<s;;
	
}
