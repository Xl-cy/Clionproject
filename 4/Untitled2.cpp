#include <iostream>
using namespace std;
int main ()
{
	long long a[100];
	int i=0;
	int x;
	while(cin>>x && x)
		a[i++]=x;
	for(int j=i-1;j>=0;j--)
		cout<<a[j]<<' ';
	return 0;
}
