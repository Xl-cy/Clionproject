#include <iostream>
using namespace std;
int main ()
{
	double x;
	cin>>x;
	double a=2.0;
	int i=0;
	double sum=0;
	while(sum<x){
		sum+=a;
		a*=0.98;
		i++;
	}
	cout<<i++;
	return 0;
}
