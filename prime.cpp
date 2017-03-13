#include<iostream>

using namespace std;
/*
int main()
{
	bool sieve[1000000]={0};
	sieve[0]=sieve[1]=1;
	for(unsigned long a=2;a<1000000;a++)
	{
		if(sieve[a]==0)
		{
			for(unsigned long b=a*a;b<1000000;b+=a)
				sieve[b]=1;
		}
	}
	
	for(unsigned long a=0;a<1000000;a++)
	{
		if(sieve[a]==0)
		cout<<a<<"___";
	}
	
}
