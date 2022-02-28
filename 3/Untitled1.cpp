#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int temp=1000;
	for(int i = 1;i<=n;i++){
		int x;
		cin>>x;
		if(x<temp)
			temp=x;
	}
	cout<<temp;
	return 0;
}
