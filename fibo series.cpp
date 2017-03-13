#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
inline int f (int n)
{
	if(n==0||n==1)
	return n;
	else return f(n-1)+f(n-2);
	
}
int main() {
	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	int n;
	cin>>n;
	int i=1;
	while (n)
	{
		n=n-f(i);
		if(n==1)
		{
		cout <<"fabo"<<endl;
		break;
	    }
		else if(n==0)
		cout <<"ordinary"<<endl;
		
		i++;
	 } 
    return 0;
}

