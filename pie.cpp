#include <iostream>
#include <cmath>
using namespace std;
float l =5; 
float  pi ( float n,float s)
{
	if (n==l)
	return s;
	else     
	{
	
	 s+= pow(-1,n+1)*(float)(1/(2*n-1));
	 n++;
   return pi(n,s);
}

}
main()
{
	float er =0,error =0,Pi=3.14159;
	er =(float)((1/(2*l-1)/Pi));	
	cout <<"the value of pie is "<<4*pi(1,0)<<endl<<"fractional error is "<<er*100<<"%"<<endl;
}
