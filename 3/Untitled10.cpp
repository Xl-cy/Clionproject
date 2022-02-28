#include <iostream>
using namespace std;
int F(int n){
	if(n==2)
		return 1;
	else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main ()
{
	int L;
	cin>>L;
	if(L==1)
		cout<<0;
	else{
		int count=0;
		int sum=0;
		for(int i=2;;i++){
			if(sum>=L)
				break;
			else{
				if(F(i)==1){
					if((sum+i)>L)
						break;
					else{
						cout<<i<<endl;
						count++;
						sum+=i;
					}
				}
			}
		}
		cout<<count;
	}
	return 0;
}
