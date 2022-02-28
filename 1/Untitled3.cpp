#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e,f;
	if(b>d)
	{
		e=c-a-1;
		f=60-b+d;
	}
	else{
		e=c-a;
		f=d-b;
	}
	cout<<e<<" "<<f;
	return 0;
}
