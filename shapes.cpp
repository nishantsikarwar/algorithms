#include <iostream>
#include <iomanip>
using namespace std;
main()
{
int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    cout <<setw(2*n*i-i*i+1);
   for (int j=0;j<=(n-i)*(n-i);j++)
       cout<<"-"; 
	   cout <<endl;	
}

for (int i=0;i<n;i++)
{
    cout <<setw(n*n-i*i+1);
   for (int j=0;j<=i*i;j++)
       cout<<"-"; 
	   cout <<endl;	

}

}
