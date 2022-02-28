#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a<10)
				cout<<'0'<<a;
			else
				cout<<a;
			a++;
		}
		cout<<endl;
	}
	cout<<endl;
	int b=1;
	int count=1;
	for(int k=1;k<=n;k++){
		for(int l=1;l<=n;l++){
			if(l==n-count+1){
				for(int p=1;p<=count;p++){
					if(b<10)
						cout<<'0'<<b;
					else
						cout<<b;
					b++;
				}
			}
			else
				cout<<"  ";
		}
		count++;
		cout<<endl;
	}
	return 0;
}
