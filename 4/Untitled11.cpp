#include <iostream>
#include <set>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	set<int> s;
	int len=0;
	for(int j=0;j<n-1;j++)
		for(int k=j+1;k<n;k++)
			s.insert(a[j]+a[k]);
	len=s.size();
	int sum=0;
	for(int l=0;l<n;l++){
		sum+=s.count(a[l]);
	}
	cout<<sum;
	return 0;
}
