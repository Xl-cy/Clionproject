#include <iostream>
#include <string.h>
#include <cstring>
#include <iomanip>
using namespace std;
int main ()
{
	float t;
	int n;
	cin>>t>>n;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<float(t/n);
	cout<<endl;
	cout<<2*n;
	return 0;
}
