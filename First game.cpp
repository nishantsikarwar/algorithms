#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
main()
{ 
int g[5]={1,3,5,7,9};
start:
int n,c=0;
srand(time(0));
int b=g[rand()%5];
 cout <<"lets begin"<<endl<<b;
 c++;
  cin>>n;
  c++;
  if (n>9||n<1)
  goto start;
  else
{
 n=n+b; 
  while (n!=99)  
{ 
int f=0;
    if (n<=89&&n>=80)
     { 
     if (c%2==0)
	  {
	  n = 89;
	  cout << 89-n << endl<< n <<endl;
	  c++;
      }
      else 
      cin>>f;
      if (f>9||f<1)
      goto start;
      n=n+f;
      c++;
     }
    else  if (n>=90)
     {
	 n=99;c++;
     cout << 99-n << n <<endl;
     break;
     }
   else 
   {
   	if (c%2==0)
   	{ 
   	if (n%2==0)
	  {  srand(time(0));
	    f = g[rand()%5];
	    n=n+f;
   	cout << f << endl << n;
   	   c++; }
   	   else 
   	   {  srand(time(0));
   	   	f = g[rand()%5]-1;
   	   	n = n+f;
   	   	cout << f << endl << n <<endl;
   	   	c++;
		  }
	}
		else 
		{
			cin>>f;
			if (f>9||f<1)
      goto start;
			c++;
			n=n+f;
			cout << n <<endl;
		  }  
    }
    
   }
  }
  
  }


