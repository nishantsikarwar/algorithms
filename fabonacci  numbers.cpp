#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int f0[10000]={0},f1[10000]={0},fn[10000]={0};
    f1[9999]={1};
	for(int j=0;j<n-1;j++)
{
		int r=0,c=0;
	for(int i=9999;i>=0;i--)
	{
		
		r=f0[i]+f1[i]+c;
		fn[i]=r%10;
		c=r/10;
	}
	for(int i=0;i<10000;i++)
	{
		f0[i]=f1[i];
		f1[i]=fn[i];
	}
}
int i=0;
for (i;i<10000;i++)
if (fn[i])
break;
while (i<10000)
{
cout <<fn[i];
i++;	
}

}
