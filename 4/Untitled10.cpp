#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
long long s[10]={0,0,0,0,0,0,0,0,0,0};
void f(long long x){
	while(x){
		s[x%10]++;
		x/=10;
	}
}
int main ()
{
	long long m,n;
	cin>>m>>n;
	for(long long i=m;i<=n;i++)
		f(i);
	for(int j=0;j<10;j++)
		cout<<s[j]<<' ';
	return 0;
}
