#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int s[21][21];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i)
				s[i][j]=1;
			else
				s[i][j]=s[i-1][j-1]+s[i-1][j];
		}
	}
	for(int k=1;k<=n;k++){
		for(int l=1;l<=k;l++)
			cout<<s[k][l]<<' ';
		cout<<endl;
	}
	return 0;
}
