#include <iostream>
using namespace std;
int main ()
{
	unsigned long long n;
	cin>>n;
	if(n<=3)
		cout<<0;
	else{
		unsigned long long count=0;
		count=n*(n-1)/2*(n-2)/3*(n-3)/4;
		cout<<count;
	}
	return 0;
}
