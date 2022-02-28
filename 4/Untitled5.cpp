#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[1000],b[1000],c[1000],s[1000];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		s[i]=a[i]+b[i]+c[i];
	}
	int count=0;
	for(int j=0;j<n-1;j++){
		for(int k=j+1;k<n;k++){
			if(abs(a[j]-a[k])<=5 && abs(b[j]-b[k])<=5 && abs(c[j]-c[k])<=5 && abs(s[j]-s[k])<=10)
				count++;
		}
	}
	cout<<count;
	return 0;
}
