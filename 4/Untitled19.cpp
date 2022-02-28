//#include <iostream>
//using namespace std;
//int main ()
//{
//	int s[200][200];
//	int n=0;
//	int len=0;
//	for(int i=0;;i++){
//		while(cin.get()!='\n')
//			cin>>s[i][len++];
//		if(i==len)
//			break;
//	}
//	n=len;
//	cout<<n;
//	int flag=0;
//	int count=0;
//	for(int j=0;j<n;j++){
//		for(int k=0;k<n;k++){
//			if(flag==s[j][k])
//				count++;
//			else{
//				cout<<' '<<count;
//				flag=s[j][k];
//				count=1;
//			}
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <math.h>
#include <cmath>
#include <string.h>
#include <algorithm>
using namespace std;
int main ()
{
	char s[300][300],c,last='0';
	int t=0,n,count;
	cin>>s[0];
	n=strlen(s[0]);
	for(int i=1;i<n;i++)
		cin>>s[i];
	cout<<n<<' ';
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			if(s[j][k]==last)
				count++;
			else{
				cout<<count<<' ';
				last=s[j][k];
				count=1;
			}
		}
	}
	cout<<count;
	return 0;
}
