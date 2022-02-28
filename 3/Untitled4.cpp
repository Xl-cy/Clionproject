#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int k=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<=n-i+1;j++){
			if(k<10)
				cout<<'0'<<k;
			else
				cout<<k;
			k++;
		}
		cout<<endl;
	}
	if(k<10)
		cout<<'0'<<k;
	else
		cout<<k;
	return 0;
}
