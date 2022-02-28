//#include <iostream>
//#include <queue>
//using namespace std;
//int F(int n){
//	if(n>=0 && n<9)
//		return 1;
//	else{
//		int a[9];
//		int len=0;
//		while(n){
//			a[len++]=n%10;
//			n/=10;
//		}
//		int count=0;
//		for(int j=0;j<len/2;j++){
//			if(a[j]!=a[len-j-1])
//				count=1;
//		}
//		if(count==1)
//			return 0;
//		else
//			return 1;
//	} 
//}
//int f(int n){
//	if(n==2)
//		return 1;
//	else if(n==1)
//		return 1;
//	else if(n%2==0 && n!=2 && n!=1)
//		return 0;
//	else{
//		for(int i=2;i<=n/2;i++){
//			if(n%i==0){
//				return 0;
//				break;
//			}
//		}
//		return 1;
//	}
//}
//int main ()
//{
//	int a,b;
//	cin>>a>>b;
//	if(a>b)
//		return 0;
//	if(a%2==0)
//		a++;
//	if(b>9989899)
//		b=9989899;
//	int flag=0;
//	for(int i=a;i<=b;i+=2){
//		if(F(i)==1){
//			if(f(i)==1){
//				if(flag==0){
//					cout<<i;
//					flag=1;
//				}
//				else if(flag==1){
//					cout<<endl<<i;
//				}
//			}
//		}
//	} 
//	
//	return 0;
//}

#include <iostream>
#include <math.h>
using namespace std;
int f1(int n){	//判断回文数 
	int i=0;
	int m=n;
	while(m){
		i=m%10+10*i;
		m/=10;
	}
	if(i==n)
		return 1;
	else
		return 0;
}
int f2(int n){	//判断素数 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main ()
{
	int a,b;
	cin>>a>>b;
	if(a%2==0)
		a+=1;
	if(b>9989899)
		b=9989899;
	for(int i=a;i<=b;i+=2){
		if(f1(i) && f2(i))
			cout<<i<<endl;
	}
	return 0;
}
