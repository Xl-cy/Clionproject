#include <iostream>
using namespace std;
int main ()
{
	int m,t,s;
	cin>>m>>t>>s;
	if(t==0 || m==0)
		cout<<0;
	else{
		if(s<t)
			cout<<m;
		else if(s/t>=m)
			cout<<0;
		else{
			if(s%t!=0){
			cout<<m-s/t-1;
		}
		else
			cout<<m-s/t;
		}
	}
	return 0;
}
