#include <iostream>
using namespace std;
int main ()
{
	int m,n;
	cin>>m>>n;
	int flag;
	int mon[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	if((m%4==0 && m%100!=0) || m%400==0)
		flag=1;
	else
		flag=0;
	if(flag){
		if(n==2)
			cout<<29;
		else
			cout<<mon[n];
	}
	else{
		if(n==2)
			cout<<28;
		else
			cout<<mon[n];
	}
	return 0;
}
