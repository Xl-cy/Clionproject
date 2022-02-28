#include <iostream>
#include <string.h>
using namespace std;
int s[101][101];
int judgeout(int x,int y,int n){
	if(x<0||y<0||x>n||y>n)
		return 0;
	return 1;
}
int main ()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		for(int a=x-1;a<=x+1;a++)
			for(int b=y-1;b<=y+1;b++){
				if(judgeout(a,b,n) && !s[a][b])
					s[a][b]=3;
			}
		if(!s[x-2][y] && judgeout(x-2,y,n))
			s[x-2][y]=3;
		if(!s[x+2][y] && judgeout(x+2,y,n))
			s[x+2][y]=3;
		if(!s[x][y-2] && judgeout(x,y-2,n))
			s[x][y-2]=3;
		if(!s[x][y+2] && judgeout(x,y+2,n))
			s[x][y+2]=3;
	}
	if(k>0){
		for(int j=1;j<=k;j++){
			int o,p;
			cin>>o>>p;
			for(int e=o-2;e<=o+2;e++){
				for(int r=p-2;r<=p+2;r++){
					if(!s[e][r] && judgeout(e,r,n))
						s[e][r]=1;
				}
			}
		}
	}
	int count=0;
	for(int f=1;f<=n;f++)
		for(int g=1;g<=n;g++)
			if(!s[f][g]){
				count++;
			}
	cout<<count;
	return 0;
}
