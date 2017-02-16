#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
  long long  int i=0;
//	int p=0;
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
long long int  nef (int n)
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
 /*int fr (int n)
{
	if(n==1||n==0)	
	return p+n;
    
 //   else if (n<=0)
   // {
    //	n= -n;
    //	return fr(n);
	//}
	else 
	{
		p+=1;
		n=n-nef(n);
		return fr(n);
	}
	
}*/
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
long long int n;
	cin>>n;
	cout <<nef(n);
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

