#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main ()
{
	int w,x,h;
	cin>>w>>x>>h;
	int q;
	cin>>q;
	int s[21][21][21];
	memset(s,0,sizeof(s)); 
	for(int i=0;i<q;i++){
		int x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int j=x1;j<=x2;j++){
			for(int k=y1;k<=y2;k++){
				for(int l=z1;l<=z2;l++){
					if(s[j][k][l] == 0)
						s[j][k][l]=1;
				}
			}
		}
	}
	int count=0;
	for(int m=1;m<=w;m++){
		for(int n=1;n<=x;n++){
			for(int r=1;r<=h;r++){
				if(s[m][n][r] == 0)
					count++;
			}
		}
	}
	cout<<count;
	return 0;
}
