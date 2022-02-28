#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int s[7];
	for(int i=0;i<7;i++)	//中奖号码 
		cin>>s[i];
	int t[8];	//存放各等奖结果 
	memset(t,0,sizeof(t));
	for(int j=0;j<n;j++){
		int a[7];
		int temp=0;	//每张彩票号码相同数量 
		for(int k=0;k<7;k++){
			cin>>a[k];
			for(int l=0;l<7;l++){
				if(a[k]==s[l])
					temp++;
			}
		}
		t[temp]++;
	}
	for(int p=7;p>=1;p--)
		cout<<t[p]<<' ';
	return 0;
}
