#include <iostream>
using namespace std;
int main ()
{
	int n,m;
	cin>>n>>m;
	int s[3000];
	for(int i=0;i<n;i++)
		cin>>s[i];
	int min=300000;
	for(int j=0;j<n-m+1;j++){
		int temp=0;
		for(int k=0;k<m;k++)
			temp+=s[j+k];
		if(temp<min)
			min=temp;
	}
	cout<<min;
	return 0;
}
