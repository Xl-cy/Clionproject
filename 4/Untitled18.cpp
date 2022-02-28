//#include <iostream>
//using namespace std;
//int main ()
//{
//	int n;
//	cin>>n;
//	int a[200];
//	int len=0;
//	while(cin>>a[len++]){
//		if(cin.get() == '\n')
//			break;
//	}
//	int count=0;
//	int flag=0;
//	for(int i=0;i<len;i++){
//		if(flag==0){
//			while(a[i]--){
//				cout<<0;
//				count++;
//				if(count==n){
//					cout<<endl;
//					count=0;
//				}
//			}
//			flag=1;
//			continue;
//		}
//		else if(flag==1){
//			while(a[i]--){
//				cout<<1;
//				count++;
//				if(count==n){
//					cout<<endl;
//					count=0;
//				}
//			}
//			flag=0;
//			continue;
//		}
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int x;
	int count=0;
	int flag=0;
	while(cin>>x){
		for(int i=1;i<=x;i++){
			cout<<flag;
			count++;
			if(count%n==0)
				cout<<endl;
		}
		if(flag==0)
			flag=1;
		else
			flag=0;
		if(count==n*n)
			break;
	}
	return 0;
}
