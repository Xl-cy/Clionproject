#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int max=0,min=1000;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if(max<a)
			max=a;
		if(min>a)
			min=a;
	}
	cout<<max-min;
	return 0;
}
