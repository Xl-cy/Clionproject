#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	double count=0;
	for(int i=1;i<=n;i++){
		int j=i;
		double temp=1;
		while(j!=1){
			temp*=j;
			j=j-1;
		}
		count+=temp;
	}
	cout<<count;
	return 0;
}
