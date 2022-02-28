#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int temp=n;
	int a[500];
	int i=0;
	while(n!=1){
		if(n%2){
			n*=3;
			n+=1;
			a[i++]=n;
		}
		else{
			n/=2;
			a[i++]=n;
		}
	}
	for(int j=i-1;j>=0;j--)
		cout<<a[j]<<' ';
	cout<<temp;
	return 0;
}
