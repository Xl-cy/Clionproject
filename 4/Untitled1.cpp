#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<0;
	for(int j=1;j<n;j++){
		int sum=0;
		for(int k=0;k<j;k++){
			if(a[k]<a[j])
				sum++;
		}
		cout<<' '<<sum;
	}
	return 0;
}
