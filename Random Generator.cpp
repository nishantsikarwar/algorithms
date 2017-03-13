
1#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
# define m 1048576
# define a 615949
# define r 797807
# define d 524288 
using namespace std;
long int s=0;
long int rng ( int n)
{
	if (n==0)
	return r;
	else 
	{
          s= (a*rng(n-1)+r)%m;
 		return s;
	}
}

int main()
 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin>>n;
	cout <<rng(n)-d;   
    return 0;
  }

