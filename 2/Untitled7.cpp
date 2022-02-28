#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int s[4];
	for(int i = 1;i<=3;i++){
		int a,b;
		cin>>a>>b;
		if(n%a==0)
			s[i]=n/a*b;
		else
			s[i]=(n/a+1)*b;
	}
	int temp=0;
	temp=min(s[1],s[2]);
	temp=min(temp,s[3]);
	cout<<temp;
	return 0;
}
