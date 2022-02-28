#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int s[2000001];
	memset(s,0,sizeof(s));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		double a;
		cin>>a>>t;
		long long T;
		for(int k=1;k<=t;k++){
			T=a*k;
			if(s[T])
				s[T]=0;
			else
				s[T]=1;
		}
	}
	for(int j=1;;j++)
		if(s[j]){
			cout<<j;
			break;
		}
	return 0;
}
