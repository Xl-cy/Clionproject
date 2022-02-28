#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	if(n==0)
		cout<<0;
	else{
		while(n%10==0)
			n/=10;
		if(n>0){
			while(n){
				cout<<n%10;
				n/=10;
			}
		}
		else if(n<0){
			n=abs(n);
			cout<<'-';
			while(n){
				cout<<n%10;
				n/=10;
			}
		}
	}
	return 0;
}
