#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int** s=new int* [n];
	for(int i=0;i<=n;i++){
		s[i]=new int[n];
		for(int j=0;j<=n;j++)
			s[i][j]=0;
	}
	int a=1,b=n/2+1;	//a表示k-1个数的行，b表示k-1个数的列
	s[a][b]=1;
	for(int k=2;k<=n*n;k++){
		if(a==1 && b!=n){
			a=n;
			b+=1;
			s[a][b]=k;
		}
		else if(b==n && a!=1){
			b=1;
			a-=1;
			s[a][b]=k;
		}
		else if(a==1 && b==n){
			a+=1;
			s[a][b]=k;
		}
		else if(a!=1 && b!=n){
			if(s[a-1][b+1]==0){
				a-=1;
				b+=1;
				s[a][b]=k;
			}
			else{
				a+=1;
				s[a][b]=k;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<s[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
