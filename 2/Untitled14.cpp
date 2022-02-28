#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
	int a[3];
	for(int i = 0;i<3;i++)
		cin>>a[i]; 
	sort(a,a+3);
	char b[3];
	cin>>b[0]>>b[1]>>b[2];
	if(b[0]=='A')
		cout<<a[0]<<' ';
	else if(b[0]=='B')
		cout<<a[1]<<' ';
	else
		cout<<a[2]<<' ';
	
	
	if(b[1]=='A')
		cout<<a[0]<<' ';
	else if(b[1]=='B')
		cout<<a[1]<<' ';
	else
		cout<<a[2]<<' ';
	
	
	if(b[2]=='A')
		cout<<a[0];
	else if(b[2]=='B')
		cout<<a[1];
	else
		cout<<a[2];
	
	
	return 0;
}
