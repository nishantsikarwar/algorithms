#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float n,r;
    cin>>n>>r;
  long double c=1;
    while(r)
    {
    	//	cout <<(float)(n/r)<<endl;
    	c=((float)(n/r))*c;
    	
    	n--;
    	r--;
    
	}
	cout <<c;
    return 0;
}

