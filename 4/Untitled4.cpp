#include <iostream>
using namespace std;
int main ()
{
	int l,m;
	cin>>l>>m;
	int a[10001];
	for(int p=0;p<=l;p++)
		a[p]=0;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		for(int j=u;j<=v;j++)
			a[j]=1;
	}
	int count=0;
	for(int k=0;k<=l;k++){
		if(a[k]==1)
			count++;
	}
	cout<<l-count+1;
	return 0;
}
