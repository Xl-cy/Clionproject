#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int x,k;
	n=n/52/7;
	for(k=1;;k++){
		x=n-3*k;
		if(x>=1 && x<=100){
			cout<<x<<endl<<k;
			break;
		}
	}
	return 0;
}
