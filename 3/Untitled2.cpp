#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	double temp1=0,temp2=0;
	int a=0,b=0;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			temp1+=i;
			a++;
		}
		else{
			temp2+=i;
			b++;
		}
	}
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<temp1/a<<' ';
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<temp2/b;
	return 0;
}
