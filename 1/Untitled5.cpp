#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
	double a,b,c;
	cin>>a>>b>>c;
	double p=(a+b+c)/2.0;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<s;
	return 0;
}
