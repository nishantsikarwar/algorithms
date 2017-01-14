#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int n;
	cout <<"enter the no"<<endl;
	cin>>n;
	int l=sqrt(n)+1,r=1;
	int p[l][l];
	for (int i=0;i<l;i++)
	for (int j=0;j<l;j++)
 	    {  
		 if (r<=n)
		    {
			p[i][j]=r;
			r++;
	         }
	         else 
			 p[i][j]=0;
	    }
	    int *q=&p[0][0];
	    	for (int i=0;i<l;i++)
	  {
	  for (int j=0;j<l;j++)
	 {
	   int s=0;
            if (*(q+l*i+j+1)!=0)
			{
				cout <<*(q+l*i+j+1)<<endl;
				s=*(q+l*i+j+1);
				while (l*i+j+s+2<=n)
				{
					*(q+l*i+j+s+1)= 0;
						s=s+*(q+l*i+j+1);
				}
				
				}	
	
       }
     }
}
