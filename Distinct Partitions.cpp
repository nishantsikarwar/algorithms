#include <iostream>
#include <cmath>
using namespace std;
long long int c=0,sum=0;
int dp (int n,int r)
{
if (n<=r)
return 0;
else
{
c++;
int i=r+1;
while (n-i>=i)
{
sum+= dp(n-i,i);
i++;
}
return sum;
}

}
int main()
{
int n;
cin>>n;
dp (n,0);
cout <<c<<endl;
}
