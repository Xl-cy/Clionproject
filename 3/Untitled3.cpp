#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	int i=0;
	while(a!=1){
		a/=2;
		i++;
	}
	cout<<i+1;
	return 0;
}
