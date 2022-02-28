#include <iostream>
using namespace std;
int main ()
{
	int k;
	cin>>k;
	int count=0;
	int s=0;
	int n;
	int i;
	for(i=1;i<=k;i++){
		s=i*(i+1)/2;
		if(s>=k){
			if(s>k)
				n=i-1;
			else if(s==k)
				n=i;
			break;
		}
	}
	for(int j=1;j<=n;j++){
		count+=(j*j);
	}
	count+=((k-(n*(n+1)/2))*i);
	cout<<count;
	return 0;
}
