#include <iostream>
using namespace std;
int rof (int n)
{
	if (n==1)
	return 1;
	else if (n==2)
	return 2;
	else if (n==3)
	return 4;
	else return rof(n-1)+rof(n-2)+rof(n-3)+1;
	
}
main()
{
	int n;
	cin>>n;
	cout <<rof(n);
}
