#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	float count=0;
	if(n<=150)
		count=0.4463*n;
	else if(n>=151 && n<=400)
		count=0.4663*(n-150)+150*0.4463;
	else
		count=0.5663*(n-400)+150*0.4463+(400-150)*0.4663;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<count;
	return 0;
}
