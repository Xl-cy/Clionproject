#include <iostream>
using namespace std;
int main ()
{
	int s[8];
	for(int i = 1;i<=7;i++){
		unsigned int m,n;
		cin>>m>>n;
		if((m+n)<=8)
			s[i]=0;
		else{
			s[i]=m+n-8;
		}
	}
	int k=0;
	int p=0;
	for(int j = 1;j<=7;j++){
		if(s[j]>k){
			k=s[j];
			p=j;
		}
	}
	cout<<p;
	return 0;
}
