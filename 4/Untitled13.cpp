#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a[s1+s2+s3+1];
	memset(a,0,sizeof(a));
	for(int i=1;i<=s1;i++)
		for(int j=1;j<=s2;j++)
			for(int k=1;k<=s3;k++)
				a[i+j+k]++;
	int sum=a[3];
	int count=0;
	for(int l=4;l<=s1+s2+s3;l++)
		if(sum<a[l]){
			sum=a[l];
			count=l;
		}
	cout<<count;
	return 0;
}
