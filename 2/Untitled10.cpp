#include <iostream>
using namespace std;
int main ()
{
	int x,n;
	cin>>x>>n;
	int temp1=n/7;
	int temp2=n%7;
	int count=0;
	count+=(temp1*5*250);
	if((x+temp2-1)>7)
		count+=((x+temp2-2-(x-1))*250);
	else if((x+temp2-1)==7)
		count+=((7-x+1-2)*250);
	else if((x+temp2-1)==6)
		count+=((7-x+1-1)*250);
	else
		count+=(temp2*250);
	cout<<count;
	return 0;
}
