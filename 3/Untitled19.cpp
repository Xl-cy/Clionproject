#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int max=0,min=10;
	int sum=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(max<a)
			max=a;
		if(min>a)
			min=a;
		sum+=a;
	}
	sum=sum-max-min;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<1.0*sum/(n-2);
	return 0;
}
