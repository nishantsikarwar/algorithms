#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   int i=0;
	int p=0;
 int f (int n)
{
	if(n==0||n==1)
	return n;
	else return f(n-1)+f(n-2);
	
}
int  nef (int n)
{
	
	if(n==1)
	return f(i+2);
	else if (n<=0)
	return f(i+1);
	else 
	{ 
	    i++;
      	return nef(n-f(i));
         }
}
 int fr (int n)
{
	if(n==1||n==0)
	
	return n;
    
    //else if (n<=0)
  //  {
    //	return 0;
	//}
	else 
	{
		
		n=n-nef(n);
		return fr(n)+1;
	}
	
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
unsigned int n;
	cin>>n;
	cout <<fr(n);
/*	int i=1;
	while (n)
	{6
		n=n-f(i);
		if(n==1)
		{
		cout <<f(i+2)<<endl;
		break;
	    }
		else if(n<=0)
		{
			
		cout <<f(i+1)<<endl;
		break;
	        }
		i++;
	 } */
    return 0;
}

