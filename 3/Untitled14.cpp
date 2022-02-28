#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	double F;
	F=((pow(((1.0+sqrt(5.0))/2.0),n))-(pow(((1-sqrt(5.0))/2.0),n)))/sqrt(5.0);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<F;
	return 0;
}
