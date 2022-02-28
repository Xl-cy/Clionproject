#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	int temp1,temp2,temp3;
	temp1=max(a,b);
	temp2=max(temp1,c);
	temp3=min(temp1,c);
	int temp4=min(a,b);
	int temp5=max(temp4,temp3);
	int temp6=min(temp4,temp3);
	cout<<temp6<<' '<<temp5<<' '<<temp2;
	return 0;
}
