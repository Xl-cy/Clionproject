#include <iostream>
using namespace std;
int main ()
{
	int n,x;
	cin>>n>>x;
	int count=0;
	for(int i=1;i<=n;i++){
		int temp=i; 
		while(temp){
			if(temp%10==x)
				count++;
			temp/=10;
		}
	}
	cout<<count;
	return 0;
}
