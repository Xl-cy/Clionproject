#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int s[10000];
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s[i]=a;
	}
	int max=1;
	int le=1;
	int temp=s[0];
	for(int j=0;j<n;j++){
		if(s[j+1]==(temp+1)){
			temp=s[j+1];
			le++;
		}
		else{
			if(le>max)
				max=le;
			le=1;
			temp=s[j+1];
		}
	}
	cout<<max;
	return 0;
}
