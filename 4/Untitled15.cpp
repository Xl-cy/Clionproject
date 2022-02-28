#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int s[11][11];
	memset(s,0,sizeof(s));
	int n;
	cin>>n;
	int i=1;
	int x=1,y=0;
	while(i<=n*n){
		while(y<n && s[x][y+1]==0){	//ср 
			s[x][++y]=i++;
		}
		while(x<n && s[x+1][y]==0){	//об 
			s[++x][y]=i++;
		}
		while(y>1 && s[x][y-1]==0){	//вС 
			s[x][--y]=i++;
		}
		while(x>1 && s[x-1][y]==0){	//ио 
			s[--x][y]=i++;
		}
	}
	for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
			if(s[j][k]<10)
				cout<<"  "<<s[j][k];
			else
				cout<<' '<<s[j][k];
		}
		cout<<endl;
	}
	return 0;
}
