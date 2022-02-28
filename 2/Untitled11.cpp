#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main ()
{
	long long a,b,c;
	cin>>a>>b>>c;
	long long mi,ma;
	long long temp1,temp2;
	temp1=max(a,b);
	ma=max(temp1,c);
	temp2=min(a,b);
	mi=min(temp2,c);
	long long temp;
	for(int i=1;i<=mi;i++){
		if(mi%i==0 && ma%i==0)
			temp=i;
	}
	cout<<mi/temp<<'/'<<ma/temp;
	return 0;
}
