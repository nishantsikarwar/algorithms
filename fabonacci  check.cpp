#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
inline long long int f(int n)
{

if (n==0||n==1)
return n;
 
	else
	{
	
		 if (n%2==0)
		{
			n=n/2;
		return (f(n)*f(n)+2*f(n)*f(n-1));
		
	        }
		else 
		{
			n=(n-1)/2;
			return f(n+1)*f(n+1)+f(n)*f(n);
			
		 } 
		
}

}

int main() {
	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	long long int n;
	cin>>n;
	long int i=1;
	while (n)
	{
		n=n-f(i);
		if(n==1)
		{
		cout <<"fabo"<<endl;
		break;
	    }
		else if(n<=0)
		{
			
		cout <<"ordinary"<<endl;
		break;
	        }
		i++;
	 } 
    return 0;
}

