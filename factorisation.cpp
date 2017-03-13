#include <iostream>
using namespace std;
int main()
{
	int n,phi=1;
	cin>>n;
	int i=2;
	while (n)
	{
		if (n%i==0)
		{
				n=n/i;
					phi=n*i; 
		}
			else
			{
					phi=phi-phi/i;
			}
	
	}
}
